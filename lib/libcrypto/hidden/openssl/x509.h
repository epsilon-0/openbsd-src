/* $OpenBSD: x509.h,v 1.10 2024/08/28 08:41:18 tb Exp $ */
/*
 * Copyright (c) 2022 Bob Beck <beck@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _LIBCRYPTO_X509_H
#define _LIBCRYPTO_X509_H

#ifndef _MSC_VER
#include_next <openssl/x509.h>
#else
#include "../include/openssl/x509.h"
#endif
#include "crypto_namespace.h"

LCRYPTO_USED(X509_CRL_up_ref);
LCRYPTO_USED(i2d_re_X509_CRL_tbs);
LCRYPTO_USED(X509_get_X509_PUBKEY);
LCRYPTO_USED(X509_verify_cert_error_string);
LCRYPTO_USED(X509_verify);
LCRYPTO_USED(X509_REQ_verify);
LCRYPTO_USED(NETSCAPE_SPKI_verify);
LCRYPTO_USED(NETSCAPE_SPKI_b64_decode);
LCRYPTO_USED(NETSCAPE_SPKI_b64_encode);
LCRYPTO_USED(NETSCAPE_SPKI_get_pubkey);
LCRYPTO_USED(NETSCAPE_SPKI_set_pubkey);
LCRYPTO_USED(X509_sign);
LCRYPTO_USED(X509_sign_ctx);
LCRYPTO_USED(X509_REQ_sign);
LCRYPTO_USED(X509_REQ_sign_ctx);
LCRYPTO_USED(X509_CRL_sign);
LCRYPTO_USED(X509_CRL_sign_ctx);
LCRYPTO_USED(NETSCAPE_SPKI_sign);
LCRYPTO_USED(X509_pubkey_digest);
LCRYPTO_USED(X509_digest);
LCRYPTO_USED(X509_CRL_digest);
LCRYPTO_USED(X509_REQ_digest);
LCRYPTO_USED(X509_NAME_digest);
LCRYPTO_USED(d2i_X509_fp);
LCRYPTO_USED(i2d_X509_fp);
LCRYPTO_USED(d2i_X509_CRL_fp);
LCRYPTO_USED(i2d_X509_CRL_fp);
LCRYPTO_USED(d2i_X509_REQ_fp);
LCRYPTO_USED(i2d_X509_REQ_fp);
LCRYPTO_USED(d2i_RSAPrivateKey_fp);
LCRYPTO_USED(i2d_RSAPrivateKey_fp);
LCRYPTO_USED(d2i_RSAPublicKey_fp);
LCRYPTO_USED(i2d_RSAPublicKey_fp);
LCRYPTO_USED(d2i_DSAPrivateKey_fp);
LCRYPTO_USED(i2d_DSAPrivateKey_fp);
LCRYPTO_USED(d2i_ECPrivateKey_fp);
LCRYPTO_USED(i2d_ECPrivateKey_fp);
LCRYPTO_USED(d2i_PKCS8_fp);
LCRYPTO_USED(i2d_PKCS8_fp);
LCRYPTO_USED(d2i_PKCS8_PRIV_KEY_INFO_fp);
LCRYPTO_USED(i2d_PKCS8_PRIV_KEY_INFO_fp);
LCRYPTO_USED(i2d_PKCS8PrivateKeyInfo_fp);
LCRYPTO_USED(i2d_PrivateKey_fp);
LCRYPTO_USED(d2i_PrivateKey_fp);
LCRYPTO_USED(d2i_X509_bio);
LCRYPTO_USED(i2d_X509_bio);
LCRYPTO_USED(d2i_X509_CRL_bio);
LCRYPTO_USED(i2d_X509_CRL_bio);
LCRYPTO_USED(d2i_X509_REQ_bio);
LCRYPTO_USED(i2d_X509_REQ_bio);
LCRYPTO_USED(d2i_RSAPrivateKey_bio);
LCRYPTO_USED(i2d_RSAPrivateKey_bio);
LCRYPTO_USED(d2i_RSAPublicKey_bio);
LCRYPTO_USED(i2d_RSAPublicKey_bio);
LCRYPTO_USED(d2i_DSAPrivateKey_bio);
LCRYPTO_USED(i2d_DSAPrivateKey_bio);
LCRYPTO_USED(d2i_ECPrivateKey_bio);
LCRYPTO_USED(i2d_ECPrivateKey_bio);
LCRYPTO_USED(d2i_PKCS8_bio);
LCRYPTO_USED(i2d_PKCS8_bio);
LCRYPTO_USED(d2i_PKCS8_PRIV_KEY_INFO_bio);
LCRYPTO_USED(i2d_PKCS8_PRIV_KEY_INFO_bio);
LCRYPTO_USED(i2d_PKCS8PrivateKeyInfo_bio);
LCRYPTO_USED(i2d_PrivateKey_bio);
LCRYPTO_USED(d2i_PrivateKey_bio);
LCRYPTO_USED(X509_cmp_time);
LCRYPTO_USED(X509_cmp_current_time);
LCRYPTO_USED(X509_time_adj);
LCRYPTO_USED(X509_time_adj_ex);
LCRYPTO_USED(X509_gmtime_adj);
LCRYPTO_USED(X509_get_default_cert_area);
LCRYPTO_USED(X509_get_default_cert_dir);
LCRYPTO_USED(X509_get_default_cert_file);
LCRYPTO_USED(X509_get_default_cert_dir_env);
LCRYPTO_USED(X509_get_default_cert_file_env);
LCRYPTO_USED(X509_get_default_private_dir);
LCRYPTO_USED(X509_to_X509_REQ);
LCRYPTO_USED(X509_REQ_to_X509);
LCRYPTO_USED(X509_get_pubkey_parameters);
LCRYPTO_USED(X509_NAME_oneline);
LCRYPTO_USED(X509_get0_extensions);
LCRYPTO_USED(X509_get0_tbs_sigalg);
LCRYPTO_USED(X509_get0_uids);
LCRYPTO_USED(X509_set_version);
LCRYPTO_USED(X509_get_version);
LCRYPTO_USED(X509_set_serialNumber);
LCRYPTO_USED(X509_get_serialNumber);
LCRYPTO_USED(X509_get0_serialNumber);
LCRYPTO_USED(X509_set_issuer_name);
LCRYPTO_USED(X509_get_issuer_name);
LCRYPTO_USED(X509_set_subject_name);
LCRYPTO_USED(X509_get_subject_name);
LCRYPTO_USED(X509_set_notBefore);
LCRYPTO_USED(X509_set1_notBefore);
LCRYPTO_USED(X509_set_notAfter);
LCRYPTO_USED(X509_set1_notAfter);
LCRYPTO_USED(X509_get0_notBefore);
LCRYPTO_USED(X509_getm_notBefore);
LCRYPTO_USED(X509_get0_notAfter);
LCRYPTO_USED(X509_getm_notAfter);
LCRYPTO_USED(X509_set_pubkey);
LCRYPTO_USED(X509_get_pubkey);
LCRYPTO_USED(X509_get0_pubkey);
LCRYPTO_USED(X509_get0_pubkey_bitstr);
LCRYPTO_USED(X509_certificate_type);
LCRYPTO_USED(X509_get_signature_type);
LCRYPTO_USED(X509_REQ_set_version);
LCRYPTO_USED(X509_REQ_get_version);
LCRYPTO_USED(X509_REQ_set_subject_name);
LCRYPTO_USED(X509_REQ_get_subject_name);
LCRYPTO_USED(X509_REQ_set_pubkey);
LCRYPTO_USED(X509_REQ_get_pubkey);
LCRYPTO_USED(i2d_re_X509_REQ_tbs);
LCRYPTO_USED(X509_REQ_get0_pubkey);
LCRYPTO_USED(X509_REQ_extension_nid);
LCRYPTO_USED(X509_REQ_get_extension_nids);
LCRYPTO_USED(X509_REQ_set_extension_nids);
LCRYPTO_USED(X509_REQ_get_extensions);
LCRYPTO_USED(X509_REQ_add_extensions_nid);
LCRYPTO_USED(X509_REQ_add_extensions);
LCRYPTO_USED(X509_REQ_get_attr_count);
LCRYPTO_USED(X509_REQ_get_attr_by_NID);
LCRYPTO_USED(X509_REQ_get_attr_by_OBJ);
LCRYPTO_USED(X509_REQ_get_attr);
LCRYPTO_USED(X509_REQ_delete_attr);
LCRYPTO_USED(X509_REQ_add1_attr);
LCRYPTO_USED(X509_REQ_add1_attr_by_OBJ);
LCRYPTO_USED(X509_REQ_add1_attr_by_NID);
LCRYPTO_USED(X509_REQ_add1_attr_by_txt);
LCRYPTO_USED(X509_CRL_set_version);
LCRYPTO_USED(X509_CRL_set_issuer_name);
LCRYPTO_USED(X509_CRL_set_lastUpdate);
LCRYPTO_USED(X509_CRL_set1_lastUpdate);
LCRYPTO_USED(X509_CRL_set_nextUpdate);
LCRYPTO_USED(X509_CRL_set1_nextUpdate);
LCRYPTO_USED(X509_CRL_sort);
LCRYPTO_USED(X509_REVOKED_get0_extensions);
LCRYPTO_USED(X509_REVOKED_get0_revocationDate);
LCRYPTO_USED(X509_REVOKED_get0_serialNumber);
LCRYPTO_USED(X509_REVOKED_set_revocationDate);
LCRYPTO_USED(X509_REVOKED_set_serialNumber);
LCRYPTO_USED(X509_REQ_check_private_key);
LCRYPTO_USED(X509_check_private_key);
LCRYPTO_USED(X509_issuer_and_serial_cmp);
LCRYPTO_USED(X509_issuer_and_serial_hash);
LCRYPTO_USED(X509_issuer_name_cmp);
LCRYPTO_USED(X509_issuer_name_hash);
LCRYPTO_USED(X509_subject_name_cmp);
LCRYPTO_USED(X509_subject_name_hash);
LCRYPTO_USED(X509_issuer_name_hash_old);
LCRYPTO_USED(X509_subject_name_hash_old);
LCRYPTO_USED(X509_cmp);
LCRYPTO_USED(X509_NAME_cmp);
LCRYPTO_USED(X509_NAME_hash);
LCRYPTO_USED(X509_NAME_hash_old);
LCRYPTO_USED(X509_CRL_cmp);
LCRYPTO_USED(X509_CRL_match);
LCRYPTO_USED(X509_NAME_entry_count);
LCRYPTO_USED(X509_NAME_get_text_by_NID);
LCRYPTO_USED(X509_NAME_get_text_by_OBJ);
LCRYPTO_USED(X509_NAME_get_index_by_NID);
LCRYPTO_USED(X509_NAME_get_index_by_OBJ);
LCRYPTO_USED(X509_NAME_get_entry);
LCRYPTO_USED(X509_NAME_delete_entry);
LCRYPTO_USED(X509_NAME_add_entry);
LCRYPTO_USED(X509_NAME_add_entry_by_OBJ);
LCRYPTO_USED(X509_NAME_add_entry_by_NID);
LCRYPTO_USED(X509_NAME_ENTRY_create_by_txt);
LCRYPTO_USED(X509_NAME_ENTRY_create_by_NID);
LCRYPTO_USED(X509_NAME_add_entry_by_txt);
LCRYPTO_USED(X509_NAME_ENTRY_create_by_OBJ);
LCRYPTO_USED(X509_NAME_ENTRY_set_object);
LCRYPTO_USED(X509_NAME_ENTRY_set_data);
LCRYPTO_USED(X509_NAME_ENTRY_get_object);
LCRYPTO_USED(X509_NAME_ENTRY_get_data);
LCRYPTO_USED(X509_NAME_ENTRY_set);
LCRYPTO_USED(X509v3_get_ext_count);
LCRYPTO_USED(X509v3_get_ext_by_NID);
LCRYPTO_USED(X509v3_get_ext_by_OBJ);
LCRYPTO_USED(X509v3_get_ext_by_critical);
LCRYPTO_USED(X509v3_get_ext);
LCRYPTO_USED(X509v3_delete_ext);
LCRYPTO_USED(X509v3_add_ext);
LCRYPTO_USED(X509_get_ext_count);
LCRYPTO_USED(X509_get_ext_by_NID);
LCRYPTO_USED(X509_get_ext_by_OBJ);
LCRYPTO_USED(X509_get_ext_by_critical);
LCRYPTO_USED(X509_get_ext);
LCRYPTO_USED(X509_delete_ext);
LCRYPTO_USED(X509_add_ext);
LCRYPTO_USED(X509_get_ext_d2i);
LCRYPTO_USED(X509_add1_ext_i2d);
LCRYPTO_USED(X509_CRL_get_ext_count);
LCRYPTO_USED(X509_CRL_get_ext_by_NID);
LCRYPTO_USED(X509_CRL_get_ext_by_OBJ);
LCRYPTO_USED(X509_CRL_get_ext_by_critical);
LCRYPTO_USED(X509_CRL_get_ext);
LCRYPTO_USED(X509_CRL_delete_ext);
LCRYPTO_USED(X509_CRL_add_ext);
LCRYPTO_USED(X509_CRL_get_ext_d2i);
LCRYPTO_USED(X509_CRL_add1_ext_i2d);
LCRYPTO_USED(X509_REVOKED_get_ext_count);
LCRYPTO_USED(X509_REVOKED_get_ext_by_NID);
LCRYPTO_USED(X509_REVOKED_get_ext_by_OBJ);
LCRYPTO_USED(X509_REVOKED_get_ext_by_critical);
LCRYPTO_USED(X509_REVOKED_get_ext);
LCRYPTO_USED(X509_REVOKED_delete_ext);
LCRYPTO_USED(X509_REVOKED_add_ext);
LCRYPTO_USED(X509_REVOKED_get_ext_d2i);
LCRYPTO_USED(X509_REVOKED_add1_ext_i2d);
LCRYPTO_USED(X509_EXTENSION_create_by_NID);
LCRYPTO_USED(X509_EXTENSION_create_by_OBJ);
LCRYPTO_USED(X509_EXTENSION_set_object);
LCRYPTO_USED(X509_EXTENSION_set_critical);
LCRYPTO_USED(X509_EXTENSION_set_data);
LCRYPTO_USED(X509_EXTENSION_get_object);
LCRYPTO_USED(X509_EXTENSION_get_data);
LCRYPTO_USED(X509_EXTENSION_get_critical);
LCRYPTO_UNUSED(X509at_get_attr_count);
LCRYPTO_USED(X509at_get_attr_by_NID);
LCRYPTO_USED(X509at_get_attr_by_OBJ);
LCRYPTO_UNUSED(X509at_get_attr);
LCRYPTO_UNUSED(X509at_delete_attr);
LCRYPTO_USED(X509at_add1_attr);
LCRYPTO_USED(X509at_add1_attr_by_OBJ);
LCRYPTO_USED(X509at_add1_attr_by_NID);
LCRYPTO_USED(X509at_add1_attr_by_txt);
LCRYPTO_USED(X509at_get0_data_by_OBJ);
LCRYPTO_USED(X509_ATTRIBUTE_create_by_NID);
LCRYPTO_USED(X509_ATTRIBUTE_create_by_OBJ);
LCRYPTO_USED(X509_ATTRIBUTE_create_by_txt);
LCRYPTO_USED(X509_ATTRIBUTE_set1_object);
LCRYPTO_USED(X509_ATTRIBUTE_set1_data);
LCRYPTO_USED(X509_ATTRIBUTE_get0_data);
LCRYPTO_USED(X509_ATTRIBUTE_count);
LCRYPTO_USED(X509_ATTRIBUTE_get0_object);
LCRYPTO_USED(X509_ATTRIBUTE_get0_type);
LCRYPTO_USED(X509_verify_cert);
LCRYPTO_USED(X509_find_by_issuer_and_serial);
LCRYPTO_USED(X509_find_by_subject);
LCRYPTO_USED(X509_check_trust);
LCRYPTO_USED(X509_up_ref);
LCRYPTO_USED(X509_chain_up_ref);
LCRYPTO_USED(ERR_load_X509_strings);
LCRYPTO_USED(X509_CRL_get_signature_nid);
LCRYPTO_USED(X509_CRL_get0_extensions);
LCRYPTO_USED(X509_CRL_get_version);
LCRYPTO_USED(X509_CRL_get0_lastUpdate);
LCRYPTO_USED(X509_CRL_get0_nextUpdate);
LCRYPTO_USED(X509_CRL_get_lastUpdate);
LCRYPTO_USED(X509_CRL_get_nextUpdate);
LCRYPTO_USED(X509_CRL_get_issuer);
LCRYPTO_USED(X509_CRL_get_REVOKED);
LCRYPTO_USED(X509_CRL_get0_signature);
LCRYPTO_USED(X509_CRL_get0_tbs_sigalg);
LCRYPTO_USED(X509_REQ_get_signature_nid);
LCRYPTO_USED(X509_REQ_get0_signature);
LCRYPTO_USED(X509_CRL_verify);
LCRYPTO_USED(NETSCAPE_SPKI_print);
LCRYPTO_USED(X509_signature_dump);
LCRYPTO_USED(X509_signature_print);
LCRYPTO_USED(d2i_RSA_PUBKEY_fp);
LCRYPTO_USED(i2d_RSA_PUBKEY_fp);
LCRYPTO_USED(d2i_DSA_PUBKEY_fp);
LCRYPTO_USED(i2d_DSA_PUBKEY_fp);
LCRYPTO_USED(d2i_EC_PUBKEY_fp);
LCRYPTO_USED(i2d_EC_PUBKEY_fp);
LCRYPTO_USED(i2d_PUBKEY_fp);
LCRYPTO_USED(d2i_PUBKEY_fp);
LCRYPTO_USED(d2i_RSA_PUBKEY_bio);
LCRYPTO_USED(i2d_RSA_PUBKEY_bio);
LCRYPTO_USED(d2i_DSA_PUBKEY_bio);
LCRYPTO_USED(i2d_DSA_PUBKEY_bio);
LCRYPTO_USED(d2i_EC_PUBKEY_bio);
LCRYPTO_USED(i2d_EC_PUBKEY_bio);
LCRYPTO_USED(i2d_PUBKEY_bio);
LCRYPTO_USED(d2i_PUBKEY_bio);
LCRYPTO_USED(X509_dup);
LCRYPTO_USED(X509_ATTRIBUTE_dup);
LCRYPTO_USED(X509_EXTENSION_dup);
LCRYPTO_USED(X509_CRL_dup);
LCRYPTO_USED(X509_REQ_dup);
LCRYPTO_USED(X509_ALGOR_dup);
LCRYPTO_USED(X509_ALGOR_set0);
LCRYPTO_USED(X509_ALGOR_get0);
LCRYPTO_USED(X509_ALGOR_cmp);
LCRYPTO_USED(X509_NAME_dup);
LCRYPTO_USED(X509_NAME_get0_der);
LCRYPTO_USED(X509_NAME_ENTRY_dup);
LCRYPTO_USED(X509_ALGOR_new);
LCRYPTO_USED(X509_ALGOR_free);
LCRYPTO_USED(d2i_X509_ALGOR);
LCRYPTO_USED(i2d_X509_ALGOR);
LCRYPTO_USED(d2i_X509_ALGORS);
LCRYPTO_USED(i2d_X509_ALGORS);
LCRYPTO_USED(X509_VAL_new);
LCRYPTO_USED(X509_VAL_free);
LCRYPTO_USED(d2i_X509_VAL);
LCRYPTO_USED(i2d_X509_VAL);
LCRYPTO_USED(X509_PUBKEY_new);
LCRYPTO_USED(X509_PUBKEY_free);
LCRYPTO_USED(d2i_X509_PUBKEY);
LCRYPTO_USED(i2d_X509_PUBKEY);
LCRYPTO_USED(X509_PUBKEY_set);
LCRYPTO_USED(X509_PUBKEY_get);
LCRYPTO_USED(X509_PUBKEY_get0);
LCRYPTO_USED(i2d_PUBKEY);
LCRYPTO_USED(d2i_PUBKEY);
LCRYPTO_USED(i2d_RSA_PUBKEY);
LCRYPTO_USED(d2i_RSA_PUBKEY);
LCRYPTO_USED(i2d_DSA_PUBKEY);
LCRYPTO_USED(d2i_DSA_PUBKEY);
LCRYPTO_USED(i2d_EC_PUBKEY);
LCRYPTO_USED(d2i_EC_PUBKEY);
LCRYPTO_USED(X509_SIG_new);
LCRYPTO_USED(X509_SIG_free);
LCRYPTO_USED(d2i_X509_SIG);
LCRYPTO_USED(i2d_X509_SIG);
LCRYPTO_USED(X509_SIG_get0);
LCRYPTO_USED(X509_SIG_getm);
LCRYPTO_USED(X509_REQ_INFO_new);
LCRYPTO_USED(X509_REQ_INFO_free);
LCRYPTO_USED(d2i_X509_REQ_INFO);
LCRYPTO_USED(i2d_X509_REQ_INFO);
LCRYPTO_USED(X509_REQ_new);
LCRYPTO_USED(X509_REQ_free);
LCRYPTO_USED(d2i_X509_REQ);
LCRYPTO_USED(i2d_X509_REQ);
LCRYPTO_USED(X509_ATTRIBUTE_new);
LCRYPTO_USED(X509_ATTRIBUTE_free);
LCRYPTO_USED(d2i_X509_ATTRIBUTE);
LCRYPTO_USED(i2d_X509_ATTRIBUTE);
LCRYPTO_USED(X509_ATTRIBUTE_create);
LCRYPTO_USED(X509_EXTENSION_new);
LCRYPTO_USED(X509_EXTENSION_free);
LCRYPTO_USED(d2i_X509_EXTENSION);
LCRYPTO_USED(i2d_X509_EXTENSION);
LCRYPTO_USED(d2i_X509_EXTENSIONS);
LCRYPTO_USED(i2d_X509_EXTENSIONS);
LCRYPTO_USED(X509_NAME_ENTRY_new);
LCRYPTO_USED(X509_NAME_ENTRY_free);
LCRYPTO_USED(d2i_X509_NAME_ENTRY);
LCRYPTO_USED(i2d_X509_NAME_ENTRY);
LCRYPTO_USED(X509_NAME_new);
LCRYPTO_USED(X509_NAME_free);
LCRYPTO_USED(d2i_X509_NAME);
LCRYPTO_USED(i2d_X509_NAME);
LCRYPTO_USED(X509_NAME_set);
LCRYPTO_USED(X509_CINF_new);
LCRYPTO_USED(X509_CINF_free);
LCRYPTO_USED(d2i_X509_CINF);
LCRYPTO_USED(i2d_X509_CINF);
LCRYPTO_USED(X509_new);
LCRYPTO_USED(X509_free);
LCRYPTO_USED(d2i_X509);
LCRYPTO_USED(i2d_X509);
LCRYPTO_USED(X509_get_ex_new_index);
LCRYPTO_USED(X509_set_ex_data);
LCRYPTO_USED(X509_get_ex_data);
LCRYPTO_USED(i2d_X509_AUX);
LCRYPTO_USED(d2i_X509_AUX);
LCRYPTO_USED(i2d_re_X509_tbs);
LCRYPTO_USED(X509_get_signature_info);
LCRYPTO_USED(X509_get0_signature);
LCRYPTO_USED(X509_get_signature_nid);
LCRYPTO_USED(X509_alias_set1);
LCRYPTO_USED(X509_keyid_set1);
LCRYPTO_USED(X509_alias_get0);
LCRYPTO_USED(X509_keyid_get0);
LCRYPTO_USED(X509_add1_trust_object);
LCRYPTO_USED(X509_add1_reject_object);
LCRYPTO_USED(X509_trust_clear);
LCRYPTO_USED(X509_reject_clear);
LCRYPTO_USED(X509_REVOKED_new);
LCRYPTO_USED(X509_REVOKED_free);
LCRYPTO_USED(X509_REVOKED_dup);
LCRYPTO_USED(d2i_X509_REVOKED);
LCRYPTO_USED(i2d_X509_REVOKED);
LCRYPTO_USED(X509_CRL_INFO_new);
LCRYPTO_USED(X509_CRL_INFO_free);
LCRYPTO_USED(d2i_X509_CRL_INFO);
LCRYPTO_USED(i2d_X509_CRL_INFO);
LCRYPTO_USED(X509_CRL_new);
LCRYPTO_USED(X509_CRL_free);
LCRYPTO_USED(d2i_X509_CRL);
LCRYPTO_USED(i2d_X509_CRL);
LCRYPTO_USED(X509_CRL_add0_revoked);
LCRYPTO_USED(X509_CRL_get0_by_serial);
LCRYPTO_USED(X509_CRL_get0_by_cert);
LCRYPTO_USED(X509_PKEY_new);
LCRYPTO_USED(X509_PKEY_free);
LCRYPTO_USED(NETSCAPE_SPKI_new);
LCRYPTO_USED(NETSCAPE_SPKI_free);
LCRYPTO_USED(d2i_NETSCAPE_SPKI);
LCRYPTO_USED(i2d_NETSCAPE_SPKI);
LCRYPTO_USED(NETSCAPE_SPKAC_new);
LCRYPTO_USED(NETSCAPE_SPKAC_free);
LCRYPTO_USED(d2i_NETSCAPE_SPKAC);
LCRYPTO_USED(i2d_NETSCAPE_SPKAC);
LCRYPTO_USED(X509_INFO_new);
LCRYPTO_USED(X509_INFO_free);
LCRYPTO_USED(ASN1_item_digest);
LCRYPTO_USED(ASN1_item_verify);
LCRYPTO_USED(ASN1_item_sign);
LCRYPTO_USED(ASN1_item_sign_ctx);
LCRYPTO_USED(X509_print_ex_fp);
LCRYPTO_USED(X509_print_fp);
LCRYPTO_USED(X509_CRL_print_fp);
LCRYPTO_USED(X509_REQ_print_fp);
LCRYPTO_USED(X509_NAME_print_ex_fp);
LCRYPTO_USED(X509_NAME_print);
LCRYPTO_USED(X509_NAME_print_ex);
LCRYPTO_USED(X509_print_ex);
LCRYPTO_USED(X509_print);
LCRYPTO_USED(X509_ocspid_print);
LCRYPTO_USED(X509_CRL_print);
LCRYPTO_USED(X509_REQ_print_ex);
LCRYPTO_USED(X509_REQ_print);
LCRYPTO_UNUSED(EVP_PKEY_get_attr_count);
LCRYPTO_UNUSED(EVP_PKEY_get_attr_by_NID);
LCRYPTO_UNUSED(EVP_PKEY_get_attr_by_OBJ);
LCRYPTO_UNUSED(EVP_PKEY_get_attr);
LCRYPTO_UNUSED(EVP_PKEY_delete_attr);
LCRYPTO_UNUSED(EVP_PKEY_add1_attr);
LCRYPTO_UNUSED(EVP_PKEY_add1_attr_by_OBJ);
LCRYPTO_UNUSED(EVP_PKEY_add1_attr_by_NID);
LCRYPTO_UNUSED(EVP_PKEY_add1_attr_by_txt);
LCRYPTO_USED(PKCS8_PRIV_KEY_INFO_new);
LCRYPTO_USED(PKCS8_PRIV_KEY_INFO_free);
LCRYPTO_USED(d2i_PKCS8_PRIV_KEY_INFO);
LCRYPTO_USED(i2d_PKCS8_PRIV_KEY_INFO);
LCRYPTO_USED(EVP_PKCS82PKEY);
LCRYPTO_USED(EVP_PKEY2PKCS8);
LCRYPTO_USED(PKCS8_pkey_set0);
LCRYPTO_USED(PKCS8_pkey_get0);
LCRYPTO_USED(PKCS8_pkey_get0_attrs);
LCRYPTO_USED(PKCS8_pkey_add1_attr_by_NID);
LCRYPTO_USED(X509_PUBKEY_set0_param);
LCRYPTO_USED(X509_PUBKEY_get0_param);
#if defined(LIBRESSL_NAMESPACE)
extern LCRYPTO_USED(X509_ALGOR_it);
extern LCRYPTO_USED(X509_ALGORS_it);
extern LCRYPTO_USED(X509_VAL_it);
extern LCRYPTO_USED(X509_PUBKEY_it);
extern LCRYPTO_USED(X509_SIG_it);
extern LCRYPTO_USED(X509_REQ_INFO_it);
extern LCRYPTO_USED(X509_REQ_it);
extern LCRYPTO_USED(X509_ATTRIBUTE_it);
extern LCRYPTO_USED(X509_EXTENSION_it);
extern LCRYPTO_USED(X509_EXTENSIONS_it);
extern LCRYPTO_USED(X509_NAME_ENTRY_it);
extern LCRYPTO_USED(X509_NAME_it);
extern LCRYPTO_USED(X509_CINF_it);
extern LCRYPTO_USED(X509_it);
extern LCRYPTO_USED(X509_REVOKED_it);
extern LCRYPTO_USED(X509_CRL_INFO_it);
extern LCRYPTO_USED(X509_CRL_it);
extern LCRYPTO_USED(NETSCAPE_SPKI_it);
extern LCRYPTO_USED(NETSCAPE_SPKAC_it);
extern LCRYPTO_USED(PBEPARAM_it);
extern LCRYPTO_USED(PKCS8_PRIV_KEY_INFO_it);
#endif

#endif /* _LIBCRYPTO_X509_H */
