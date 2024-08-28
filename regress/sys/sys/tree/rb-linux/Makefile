#	$OpenBSD: Makefile,v 1.2 2023/12/29 02:37:39 aisha Exp $

REGRESS_TARGETS=	test-rb-linux

CFLAGS=	-I../../../../../sys/dev/pci/drm/include -I../../../../../../sys/dev/pci/drm/include
PROGS=	rb-linux

test-rb-linux: rb-linux
	./rb-linux

.include <bsd.regress.mk>
