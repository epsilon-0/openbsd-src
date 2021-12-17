#!/usr/bin/env python

import os
import re
import shutil
from pathlib import Path


def get_libcxx_paths():
    utils_path = os.path.dirname(os.path.abspath(__file__))
    script_name = os.path.basename(__file__)
    assert os.path.exists(utils_path)
    src_root = os.path.dirname(utils_path)
    include_path = os.path.join(src_root, 'include')
    assert os.path.exists(include_path)
    docs_path = os.path.join(src_root, 'docs')
    assert os.path.exists(docs_path)
    detail_header_test_root = os.path.join(src_root, 'test', 'libcxx',
                                           'diagnostics', 'detail.headers')
    assert os.path.exists(detail_header_test_root)
    shutil.rmtree(detail_header_test_root)
    Path(f'{detail_header_test_root}').mkdir()
    assert os.path.exists(detail_header_test_root)
    return script_name, src_root, include_path, docs_path, detail_header_test_root


script_name, source_root, include_path, docs_path, detail_header_test_root = get_libcxx_paths(
)


def generate_test(header):
    return f'''// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// REQUIRES: modules-build

// WARNING: This test was generated by '{script_name}'
// and should not be edited manually.

// expected-error@*:* {{{{use of private header from outside its module: '{header}'}}}}
#include <{header}>
'''


def relative_path(path):
    return path.as_posix()[len(include_path + '/'):]


def is_still_public(path):
    rp = relative_path(path)
    return not rp.startswith('__support') and rp not in [
        "__bsd_locale_defaults.h", "__bsd_locale_fallbacks.h", "__config",
        "__config_site.in", "__debug", "__hash_table", "__functional_base",
        "__libcpp_version", "__nullptr", "__threading_support", "__tree",
        "__undef_macros"
    ]


def main():
    paths = [
        relative_path(p) for p in Path(include_path).rglob('*')
        if relative_path(p).startswith('__') and not p.is_dir()
        and is_still_public(p)
    ]
    for path in paths:
        path_with_subdir = re.search(r'__(\w+)/(\w+)', path)
        directory = path_with_subdir.group(1) + '/' if path_with_subdir else ""
        file = path_with_subdir.group(2) if path_with_subdir else path[2:]
        path_to_write = f'{detail_header_test_root}/{directory}{file}.module.verify.cpp'
        Path(f'{detail_header_test_root}/{directory}').mkdir(exist_ok=True)
        assert os.path.exists(f'{detail_header_test_root}/{directory}')
        with open(path_to_write, 'w') as f:
            f.write(generate_test(path))


if __name__ == '__main__':
    main()
