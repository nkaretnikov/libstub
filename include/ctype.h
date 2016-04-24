// ctype.h - character types
// #include <ctype.h>

/*
 * Some of the functionality described on this header extends the ISO C
 * standard. Applications shall define the appropriate feature test macro to enable
 * the visibility of these symbols in this header.
 *
 * In the compilation of an application that #defines a feature test macro
 * specified by POSIX.1-2008, no header defined by POSIX.1-2008 shall be included
 * prior to the definition of the feature test macro. This restriction also
 * applies to any implementation-provided header in which these feature test
 * macros are used. If the definition of the macro does not precede the #include,
 * the result is undefined.
 *
 * Feature test macros shall begin with the <underscore> character ( '_' ).
 */

#ifdef _HAS_LOCALE_T
#include <locale.h> // locale_t
#endif

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided for use with ISO C
// standard compilers.
int isalnum(int);
#ifdef _HAS_LOCALE_T
int isalnum_l(int, locale_t);
#endif

int isalpha(int);
#ifdef _HAS_LOCALE_T
int isalpha_l(int, locale_t);
#endif

// XXX: XSI-conforming implementations shall set the symbolic constant
// _XOPEN_UNIX to a value other than -1 and shall set the symbolic constant
// _XOPEN_VERSION to the value 700.
// int isascii(int); // XXX: XSI, obsolescent

int isblank(int);
#ifdef _HAS_LOCALE_T
int isblank_l(int, locale_t);
#endif

int iscntrl(int);
#ifdef _HAS_LOCALE_T
int iscntrl_l(int, locale_t);
#endif

int isdigit(int);
#ifdef _HAS_LOCALE_T
int isdigit_l(int, locale_t);
#endif

int isgraph(int);
#ifdef _HAS_LOCALE_T
int isgraph_l(int, locale_t);
#endif

int islower(int);
#ifdef _HAS_LOCALE_T
int islower_l(int, locale_t);
#endif

int isprint(int);
#ifdef _HAS_LOCALE_T
int isprint_l(int, locale_t);
#endif

int ispunct(int);
#ifdef _HAS_LOCALE_T
int ispunct_l(int, locale_t);
#endif

int isspace(int);
#ifdef _HAS_LOCALE_T
int isspace_l(int, locale_t);
#endif

int isupper(int);
#ifdef _HAS_LOCALE_T
int isupper_l(int, locale_t);
#endif

int isxdigit(int);
#ifdef _HAS_LOCALE_T
int isxdigit_l(int, locale_t);
#endif

// int toascii(int); // XXX: XSI, obsolescent

int tolower(int);
#ifdef _HAS_LOCALE_T
int tolower_l(int, locale_t);
#endif

int toupper(int);
#ifdef _HAS_LOCALE_T
int toupper_l(int, locale_t);
#endif

// The <ctype.h> header shall define the following as macros:
// int _toupper(int); // XXX: XSI, obsolescent
// int _tolower(int); // XXX: XSI, obsolescent
