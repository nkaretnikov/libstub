// dirent.h - format of directory entries
// #include <dirent.h>

// The internal format of directories is unspecified.

// A type representing a directory stream. The DIR type may be an
// incomplete type.
//
// XXX: Not adding any fields for now since POSIX doesn't specify that.
struct __dirstream {};
typedef struct __dirstream DIR;

// XXX: XSI.
// The <dirent.h> header shall define the ino_t type as described in
// <sys/types.h>.

/* The array d_name is of unspecified size, which shall contain a filename of at
 * most {NAME_MAX} bytes followed by a terminating null byte.
 *
 * The name of an array of char of an unspecified size should not be
 * used as an lvalue. Use of:
 * sizeof(d_name)
 * is incorrect; use:
 * strlen(d_name)
 * instead.
 * The array of char d_name is not a fixed size. Implementations may
 * need to declare struct dirent with an array size for d_name of 1, but
 * the actual number of bytes provided matches (or only slightly
 * exceeds) the length of the filename string.
 */
#define NAME_MAX 256

struct dirent
{
  // XXX: XSI.
  // ino_t  d_ino;          // File serial number.
  char d_name[NAME_MAX];  // Filename string of entry.
};

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
int           alphasort(
                const struct dirent **,
                const struct dirent **);
int           closedir(DIR *);
int           dirfd(DIR *);
DIR           *fdopendir(int);
DIR           *opendir(const char *);
struct dirent *readdir(DIR *);
int           readdir_r(
                DIR *restrict,
                struct dirent *restrict,
                struct dirent **restrict);
void          rewinddir(DIR *);
int           scandir(
                const char *,
                struct dirent ***,
                int (*)(const struct dirent *),
                int (*)(const struct dirent **,
                const struct dirent **));
/* XXX: XSI.
 * void seekdir(DIR *, long);
 * long telldir(DIR *);
 */
