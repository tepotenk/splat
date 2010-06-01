AC_INIT([splat],[0.1.0],[])
AC_CONFIG_SRCDIR(src/main.c)
AC_CONFIG_HEADER(config.h)
AC_CONFIG_AUX_DIR(build-tools)

AC_PROG_CC
AM_PROG_CC_C_O
AC_C_CONST

AM_INIT_AUTOMAKE([dist-bzip2 no-dist-gzip])

AM_MAINTAINER_MODE([enable])

PKG_PROG_PKG_CONFIG

AM_PATH_SDL([1.2.0])

AC_CONFIG_FILES([Makefile
				 src/Makefile])
AC_OUTPUT
