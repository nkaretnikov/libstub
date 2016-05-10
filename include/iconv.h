// iconv.h - codeset conversion facility
// #include <iconv.h>

// The <iconv.h> header shall define the following types:
// Identifies the conversion from one codeset to another.
typedef void *iconv_t;
// As described in <sys/types.h>.
#include <sys/types.h>

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
size_t  iconv(iconv_t, char **restrict, size_t *restrict,
            char **restrict, size_t *restrict);
int     iconv_close(iconv_t);
iconv_t iconv_open(const char *, const char *);
