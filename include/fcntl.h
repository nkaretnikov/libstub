// fcntl.h - file control options
// #include <fcntl.h>

/*
The <fcntl.h> header shall define the following symbolic constants
for the cmd argument used by fcntl(). The values shall be unique and
shall be suitable for use in #if preprocessing directives.
*/
enum
{
  // Duplicate file descriptor.
  F_DUPFD,
#define F_DUPFD F_DUPFD

  // Duplicate file descriptor with the close-on- exec flag
  // FD_CLOEXEC set.
  F_DUPFD_CLOEXEC,
#define F_DUPFD_CLOEXEC F_DUPFD_CLOEXEC

  // Get file descriptor flags.
  F_GETFD,
#define F_GETFD F_GETFD

  // Set file descriptor flags.
  F_SETFD,
#define F_SETFD F_SETFD

  // Get file status flags and file access modes.
  F_GETFL,
#define F_GETFL F_GETFL

  // Set file status flags.
  F_SETFL,
#define F_SETFL F_SETFL

  // Get record locking information.
  F_GETLK,
#define F_GETLK F_GETLK

  // Set record locking information.
  F_SETLK,
#define F_SETLK F_SETLK

  // Set record locking information; wait if blocked.
  F_SETLKW,
#define F_SETLKW F_SETLKW

  // Get process or process group ID to receive SIGURG signals.
  F_GETOWN,
#define F_GETOWN F_GETOWN

  // Set process or process group ID to receive SIGURG signals.
  F_SETOWN
#define F_SETOWN F_SETOWN
};

/*
The <fcntl.h> header shall define the following symbolic constant
used for the fcntl() file descriptor flags, which shall be suitable
for use in #if preprocessing directives.

Close the file descriptor upon execution of an exec family
function.
*/
#define FD_CLOEXEC 1

/*
The <fcntl.h> header shall also define the following symbolic
constants for the l_type argument used for record locking with fcntl
(). The values shall be unique and shall be suitable for use in #if
preprocessing directives.
*/
enum
{
  // Shared or read lock.
  F_RDLCK,
#define F_RDLCK F_RDLCK

  // Unlock.
  F_UNLCK,
#define F_UNLCK F_UNLCK

  // Exclusive or write lock.
  F_WRLCK
#define F_WRLCK F_WRLCK
};

/*
The <fcntl.h> header shall define the values used for l_whence,
SEEK_SET, SEEK_CUR, and SEEK_END as described in <stdio.h>.
*/
#include <stdio.h>

/*
The <fcntl.h> header shall define the following symbolic constants as
file creation flags for use in the oflag value to open() and openat
(). The values shall be bitwise-distinct and shall be suitable for
use in #if preprocessing directives.
*/

// The FD_CLOEXEC flag associated with the new descriptor shall be
// set to close the file descriptor upon execution of an exec
// family function.
#define O_CLOEXEC 0x01

// Create file if it does not exist.
#define O_CREAT 0x02

// Fail if not a directory.
#define O_DIRECTORY 0x04

// Exclusive use flag.
#define O_EXCL 0x08

// Do not assign controlling terminal.
#define O_NOCTTY 0x10

// Do not follow symbolic links.
#define O_NOFOLLOW 0x20

// Truncate flag.
#define O_TRUNC O_TRUNC 0x40

// Set the termios structure terminal parameters to a state that
// provides conforming behavior; see Parameters_that_Can_be_Set.
//
// The O_TTY_INIT flag can have the value zero and in this case it need
// not be bitwise-distinct from the other flags.
#define O_TTY_INIT 0

/*
The <fcntl.h> header shall define the following symbolic constants
for use as file status flags for open(), openat(), and fcntl(). The
values shall be suitable for use in #if preprocessing directives.
*/
enum
{
  // Set append mode.
  O_APPEND,
#define APPEND APPEND

  // SIO: Write according to synchronized I/O data integrity completion.
  O_DSYNC,
#define O_DSYNC O_DSYNC

  // Non-blocking mode.
  O_NONBLOCK,
#define O_NONBLOCK O_NONBLOCK

  // SIO: Synchronized read I/O operations.
  O_RSYNC,
#define O_RSYNC O_RSYNC

  // Write according to synchronized I/O file integrity completion.
  O_SYNC
#define O_SYNC O_SYNC
};

/*
The <fcntl.h> header shall define the following symbolic constant for
use as the mask for file access modes. The value shall be suitable
for use in #if preprocessing directives.

Mask for file access modes.
*/
#define O_ACCMODE 0x7

/*
The <fcntl.h> header shall define the following symbolic constants
for use as the file access modes for open(), openat(), and fcntl().
The values shall be unique, except that O_EXEC and O_SEARCH may have
equal values. The values shall be suitable for use in #if
preprocessing directives.
*/
enum
{
  // Open for execute only (non-directory files). The result is
  // unspecified if this flag is applied to a directory.
  O_EXEC,
#define O_EXEC O_EXEC

  // Open for reading only.
  O_RDONLY,
#define O_RDONLY O_RDONLY

  // Open for reading and writing.
  O_RDWR,
#define O_RDWR O_RDWR

  // Open directory for search only. The result is unspecified if
  // this flag is applied to a non-directory file.
  O_SEARCH,
#define O_SEARCH O_SEARCH

  // Open for writing only.
  O_WRONLY
#define O_WRONLY O_WRONLY
};

/*
The <fcntl.h> header shall define the symbolic constants for file
modes for use as values of mode_t as described in <sys/stat.h>.
*/
#include <sys/stat.h>

enum
{
  /*
  The <fcntl.h> header shall define the following symbolic constant as
  a special value used in place of a file descriptor for the *at()
  functions which take a directory file descriptor as a parameter:

  Use the current working directory to determine the target of
  relative file paths.
  */
  AT_FDCWD,
#define AT_FDCWD AT_FDCWD

  /*
  The <fcntl.h> header shall define the following symbolic constant as
  a value for the flag used by faccessat():

  Check access using effective user and group ID.
  */
  AT_EACCESS,
#define AT_EACCESS AT_EACCESS

  /*
  The <fcntl.h> header shall define the following symbolic constant as
  a value for the flag used by fstatat(), fchmodat(), fchownat(), and
  utimensat():

  Do not follow symbolic links.
  */
  AT_SYMLINK_NOFOLLOW,
#define AT_SYMLINK_NOFOLLOW AT_SYMLINK_NOFOLLOW

  /*
  The <fcntl.h> header shall define the following symbolic constant as
  a value for the flag used by linkat():

  Follow symbolic link.
  */
  AT_SYMLINK_FOLLOW,
#define AT_SYMLINK_FOLLOW AT_SYMLINK_FOLLOW

  /*
  The <fcntl.h> header shall define the following symbolic constant as
  a value for the flag used by unlinkat():

  Remove directory instead of file.
  */
  AT_REMOVEDIR
#define AT_REMOVEDIR AT_REMOVEDIR
};

/*
ADV: The <fcntl.h> header shall define the following symbolic constants for the
advice argument used by posix_fadvise():
*/
enum
{
  // The application expects that it will not access the specified
  // data in the near future.
  POSIX_FADV_DONTNEED,
#define POSIX_FADV_DONTNEED POSIX_FADV_DONTNEED

  // The application expects to access the specified data once and
  // then not reuse it thereafter.
  POSIX_FADV_NOREUSE,
#define POSIX_FADV_NOREUSE POSIX_FADV_NOREUSE

  // The application has no advice to give on its behavior with
  // respect to the specified data. It is the default characteristic
  // if no advice is given for an open file.
  POSIX_FADV_NORMAL,
#define POSIX_FADV_NORMAL POSIX_FADV_NORMAL

  // The application expects to access the specified data in a
  // random order.
  POSIX_FADV_RANDOM,
#define POSIX_FADV_RANDOM POSIX_FADV_RANDOM

  // The application expects to access the specified data
  // sequentially from lower offsets to higher offsets.
  POSIX_FADV_SEQUENTIAL,
#define POSIX_FADV_SEQUENTIAL POSIX_FADV_SEQUENTIAL

  // The application expects to access the specified data in the
  // near future.
  POSIX_FADV_WILLNEED
#define POSIX_FADV_WILLNEED POSIX_FADV_WILLNEED
};

/*
The <fcntl.h> header shall define the flock structure describing a
file lock. It shall include the following members:
*/
struct flock
{
  short  l_type;   // Type of lock; F_RDLCK, F_WRLCK, F_UNLCK.
  short  l_whence; // Flag for starting offset.
  off_t  l_start;  // Relative offset in bytes.
  off_t  l_len;    // Size; if 0 then until EOF.
  pid_t  l_pid;    // Process ID of the process holding the lock; returned
                   // with F_GETLK.
};

/*
The <fcntl.h> header shall define the mode_t, off_t, and pid_t types
as described in <sys/types.h>.
*/
#include <sys/types.h>

/*
The following shall be declared as functions and may also be defined
as macros. Function prototypes shall be provided.
*/
int creat(const char *, mode_t);
int fcntl(int, int, ...);
int open(const char *, int, ...);
int openat(int, const char *, int, ...);

// ADV.
int posix_fadvise(int, off_t, off_t, int);
int posix_fallocate(int, off_t, off_t);

/*
Inclusion of the <fcntl.h> header may also make visible all symbols
from <sys/stat.h> and <unistd.h>.
*/
