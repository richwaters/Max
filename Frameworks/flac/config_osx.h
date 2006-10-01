/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* define to align allocated memory on 32-byte boundaries */
/* #undef FLAC__ALIGN_MALLOC_DATA */

/* define if building for ia32/i386 */
#if defined(__LITTLE_ENDIAN__)
#define FLAC__CPU_IA32 1
#else
#define FLAC__CPU_IA32 0
#endif

/* define if building for PowerPC */
#if defined(__BIG_ENDIAN__)
#define FLAC__CPU_PPC 1
#else
#define FLAC__CPU_PPC 0
#endif

/* define if building for SPARC */
/* #undef FLAC__CPU_SPARC */

/* define to run even more tests */
/* #undef FLAC__EXHAUSTIVE_TESTS */

/* define if you are compiling for PowerPC and have the 'as' assembler */
#define FLAC__HAS_AS 1

/* define if you have docbook-to-man or docbook2man */
/* #undef FLAC__HAS_DOCBOOK_TO_MAN */

/* define if you have Doxygen */
/* #undef FLAC__HAS_DOXYGEN */

/* define if you are compiling for PowerPC and have the 'gas' assembler */
/* #undef FLAC__HAS_GAS */

/* define if you are compiling for x86 and have the NASM assembler */
#define FLAC__HAS_NASM 1

/* define if you have the ogg library */
#define FLAC__HAS_OGG 1

/* define to disable use of assembly code */
#define FLAC__NO_ASM

/* define if your operating system supports SSE instructions */
/* #undef FLAC__SSE_OS */

/* define if building for Darwin / MacOS X */
#define FLAC__SYS_DARWIN 1

/* define if building for Linux */
/* #undef FLAC__SYS_LINUX */

/* define to enable use of 3Dnow! instructions */
#define FLAC__USE_3DNOW 1

/* define to enable use of Altivec instructions */
#define FLAC__USE_ALTIVEC 1

/* define to enable use of Valgrind in testers */
/* #undef FLAC__VALGRIND_TESTING */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define if you have the iconv() function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the system has the type `socklen_t'. */
/* #undef HAVE_SOCKLEN_T */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST const

/* Name of package */
#define PACKAGE "flac"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.1.2"
