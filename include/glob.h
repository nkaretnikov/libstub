// glob.h - pathname pattern-matching types
// #include <glob.h>

// The <glob.h> header shall define the structures and symbolic
// constants used by the glob() function.

// The <glob.h> header shall define the glob_t structure type, which
// shall include at least the following members:
typedef struct
{
  size_t   gl_pathc; // Count of paths matched by pattern.
  char   **gl_pathv; // Pointer to a list of matched pathnames.
  size_t   gl_offs;  // Slots to reserve at the beginning of gl_pathv.
} glob_t;

// The <glob.h> header shall define the size_t type as described in
// <sys/types.h>.
#include <sys/types.h>

// The <glob.h> header shall define the following symbolic constants as
// values for the flags argument:
enum
{
  // Append generated pathnames to those previously obtained.
  GLOB_APPEND,
#define GLOB_APPEND GLOB_APPEND
  // Specify how many null pointers to add to the beginning of
  // gl_pathv.
  GLOB_DOOFFS,
#define GLOB_DOOFFS GLOB_DOOFFS
  // Cause glob() to return on error.
  GLOB_ERR,
#define GLOB_ERR GLOB_ERR
  // Each pathname that is a directory that matches pattern has a
  // <slash> appended.
  GLOB_MARK,
#define GLOB_MARK GLOB_MARK
  // If pattern does not match any pathname, then return a list
  // consisting of only pattern.
  GLOB_NOCHECK,
#define GLOB_NOCHECK GLOB_NOCHECK
  // Disable backslash escaping.
  GLOB_NOESCAPE,
#define GLOB_NOESCAPE GLOB_NOESCAPE
  // Do not sort the pathnames returned.
  GLOB_NOSORT
#define GLOB_NOSORT GLOB_NOSORT
};

// The <glob.h> header shall define the following symbolic constants as
// error return values:
enum
{
  // The scan was stopped because GLOB_ERR was set or (*errfunc)()
  // returned non-zero.
  GLOB_ABORTED,
#define GLOB_ABORTED GLOB_ABORTED
  // The pattern does not match any existing pathname, and
  // GLOB_NOCHECK was not set in flags.
  GLOB_NOMATCH,
#define GLOB_NOMATCH GLOB_NOMATCH
  // An attempt to allocate memory failed.
  GLOB_NOSPACE
#define GLOB_NOSPACE GLOB_NOSPACE
};

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
int glob(
  const char *restrict,
  int,
  int(*)(const char *, int),
  glob_t *restrict);
void globfree(glob_t *);
