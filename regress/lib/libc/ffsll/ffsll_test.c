/*	$OpenBSD: ffs_test.c,v 1.1 2020/06/26 20:16:22 naddy Exp $ */
/*
 * Written by Aisha Tammy <aisha@openbsd.org>.
 * Public domain.
 */

#include <assert.h>
#include <stdint.h>
#include <string.h>

int
main(void)
{
	for (unsigned int i = 0; i < 64; i++) {
		int j = ffsll(1ull << i);
		assert(j == i + 1);
	}

	assert(ffsll(0) == 0);
	assert(ffsll(0x8080) == 8);
	assert(ffsll(INT32_MIN) == 32);
	assert(ffsll(INT64_MIN) == 64);
	assert(ffsll(INT64_MAX) == 1);

	return (0);
}
