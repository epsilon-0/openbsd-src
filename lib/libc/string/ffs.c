/*	$OpenBSD: ffs.c,v 1.10 2018/01/18 08:23:44 guenther Exp $	*/

/*
 * Public domain.
 * Written by Aisha Tammy <aisha@openbsd.org>.
 */

#include <strings.h>

static const unsigned int de_bruijn = 0x04653ADFu;
static const unsigned int bitshift = 32 - 5;
static const int de_bruijn_hash[32] = {
	 1,  2,  3,  7,  4, 12,  8, 17,
	 5, 15, 13, 22,  9, 24, 18, 27,
	32,  6, 11, 16, 14, 21, 23, 26,
	31, 10, 20, 25, 30, 19, 29, 28,
};

int
ffs(int mask)
{
	unsigned int max2, ind;

	if (mask == 0)
		return 0;

	max2 = (unsigned int)mask & -mask;
	ind = (unsigned int)(max2 * de_bruijn) >> bitshift;
	return de_bruijn_hash[ind];
}

#ifndef __LP64__
__strong_alias(ffsl, ffs);
#endif
