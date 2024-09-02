/*	$OpenBSD: ffs.c,v 1.10 2018/01/18 08:23:44 guenther Exp $	*/

/*
 * Public domain.
 * Written by Aisha Tammy <aisha@openbsd.org>.
 */

#include <strings.h>

static const unsigned long long de_bruijn = 0x0218A392CD3D5DBFull;
static const unsigned int bitshift = 64 - 6;
static const char de_bruijn_hash[64] = {
	 1,  2,  3,  8,  4, 14,  9, 20,
	 5, 26, 15, 29, 10, 35, 21, 41,
	 6, 18, 27, 39, 16, 47, 30, 49,
	11, 32, 36, 55, 22, 51, 42, 58,
	64,  7, 13, 19, 25, 28, 34, 40,
	17, 38, 46, 48, 31, 54, 50, 57,
	63, 12, 24, 33, 37, 45, 53, 56,
	62, 23, 44, 52, 61, 43, 60, 59,
};

int
ffsll(long long mask)
{
	unsigned long long max2, index;

	if (mask == 0)
		return 0;

	max2 = (unsigned long long)mask & -mask;
	index = (unsigned long long)(max2 * de_bruijn) >> bitshift;
	return de_bruijn_hash[index];
}

#ifdef __LP64__
__strong_alias(ffsl, ffsll);
#endif
