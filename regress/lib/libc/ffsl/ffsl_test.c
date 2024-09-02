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
	for (unsigned int i = 0; i < 32; i++) {
		int j = ffsl(1ul << i);
		assert(j == i + 1);
	}

	assert(ffsl(0) == 0);
	assert(ffsl(0x8080) == 8);
	assert(ffsl(INT32_MIN) == 32);
#ifdef __LP64__
	assert(ffsl(INT64_MIN) == 64);
	assert(ffsl(INT64_MAX) == 1);
#endif

	return (0);
}
