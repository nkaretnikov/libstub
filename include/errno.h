// errno.h - system error numbers
// #include <errno.h>

/*
Some of the functionality described on this reference page extends the ISO C
standard.  Any conflict between the requirements described here and the ISO C
standard is unintentional.  This volume of POSIX.1-2008 defers to the ISO C
standard.  The ISO C standard only requires the symbols [EDOM], [EILSEQ], and
[ERANGE] to be defined.
*/

/*
The <errno.h> header shall provide a declaration or definition for
errno. The symbol errno shall expand to a modifiable lvalue of type
int. It is unspecified whether errno is a macro or an identifier
declared with external linkage. If a macro definition is suppressed
in order to access an actual object, or a program defines an
identifier with the name errno, the behavior is undefined.
*/
extern int errno;

/*
The <errno.h> header shall define the following macros which shall
expand to integer constant expressions with type int, distinct
positive values (except as noted below), and which shall be suitable
for use in #if preprocessing directives:
*/
enum
{
  // Argument list too long.
  E2BIG,
#define E2BIG E2BIG

  // Permission denied.
  EACCES,
#define EACCES EACCES

  // Address in use.
  EADDRINUSE,
#define EADDRINUSE EADDRINUSE

  // Address not available.
  EADDRNOTAVAIL,
#define EADDRNOTAVAIL EADDRNOTAVAIL

  // Address family not supported.
  EAFNOSUPPORT,
#define EAFNOSUPPORT EAFNOSUPPORT

  // Resource unavailable, try again (may be the same value as
  // EWOULDBLOCK).
  EAGAIN,
#define EAGAIN EAGAIN

  // Connection already in progress.
  EALREADY,
#define EALREADY EALREADY

  // Bad file descriptor.
  EBADF,
#define EBADF EBADF

  // Bad message.
  EBADMSG,
#define EBADMSG EBADMSG

  // Device or resource busy.
  EBUSY,
#define EBUSY EBUSY

  // Operation canceled.
  ECANCELED,
#define ECANCELED ECANCELED

  // No child processes.
  ECHILD,
#define ECHILD ECHILD

  // Connection aborted.
  ECONNABORTED,
#define ECONNABORTED ECONNABORTED

  // Connection refused.
  ECONNREFUSED,
#define ECONNREFUSED ECONNREFUSED

  // Connection reset.
  ECONNRESET,
#define ECONNRESET ECONNRESET

  // Resource deadlock would occur.
  EDEADLK,
#define EDEADLK EDEADLK

  // Destination address required.
  EDESTADDRREQ,
#define EDESTADDRREQ EDESTADDRREQ

  // Mathematics argument out of domain of function.
  EDOM,
#define EDOM EDOM

  // Reserved.
  EDQUOT,
#define EDQUOT EDQUOT

  // File exists.
  EEXIST,
#define EEXIST EEXIST

  // Bad address.
  EFAULT,
#define EFAULT EFAULT

  // File too large.
  EFBIG,
#define EFBIG EFBIG

  // Host is unreachable.
  EHOSTUNREACH,
#define EHOSTUNREACH EHOSTUNREACH

  // Identifier removed.
  EIDRM,
#define EIDRM EIDRM

  // Illegal byte sequence.
  EILSEQ,
#define EILSEQ EILSEQ

  // Operation in progress.
  EINPROGRESS,
#define EINPROGRESS EINPROGRESS

  // Interrupted function.
  EINTR,
#define EINTR EINTR

  // Invalid argument.
  EINVAL,
#define EINVAL EINVAL

  // I/O error.
  EIO,
#define EIO EIO

  // Socket is connected.
  EISCONN,
#define EISCONN EISCONN

  // Is a directory.
  EISDIR,
#define EISDIR EISDIR

  // Too many levels of symbolic links.
  ELOOP,
#define ELOOP ELOOP

  // File descriptor value too large.
  EMFILE,
#define EMFILE EMFILE

  // Too many links.
  EMLINK,
#define EMLINK EMLINK

  // Message too large.
  EMSGSIZE,
#define EMSGSIZE EMSGSIZE

  // Reserved.
  EMULTIHOP,
#define EMULTIHOP EMULTIHOP

  // Filename too long.
  ENAMETOOLONG,
#define ENAMETOOLONG ENAMETOOLONG

  // Network is down.
  ENETDOWN,
#define ENETDOWN ENETDOWN

  // Connection aborted by network.
  ENETRESET,
#define ENETRESET ENETRESET

  // Network unreachable.
  ENETUNREACH,
#define ENETUNREACH ENETUNREACH

  // Too many files open in system.
  ENFILE,
#define ENFILE ENFILE

  // No buffer space available.
  ENOBUFS,
#define ENOBUFS ENOBUFS

  // XSR: No message is available on the STREAM
  // head read queue.  Obsolescent.
  ENODATA,
#define ENODATA ENODATA

  // No such device.
  ENODEV,
#define ENODEV ENODEV

  // No such file or directory.
  ENOENT,
#define ENOENT ENOENT

  // Executable file format error.
  ENOEXEC,
#define ENOEXEC ENOEXEC

  // No locks available.
  ENOLCK,
#define ENOLCK ENOLCK

  // Reserved.
  ENOLINK,
#define ENOLINK ENOLINK

  // Not enough space.
  ENOMEM,
#define ENOMEM ENOMEM

  // No message of the desired type.
  ENOMSG,
#define ENOMSG ENOMSG

  // Protocol not available.
  ENOPROTOOPT,
#define ENOPROTOOPT ENOPROTOOPT

  // No space left on device.
  ENOSPC,
#define ENOSPC ENOSPC

  // XSR: No STREAM resources.  Obsolescent.
  ENOSR,
#define ENOSR ENOSR

  // XSR: Not a STREAM.  Obsolescent.
  ENOSTR,
#define ENOSTR ENOSTR

  // Function not supported.
  ENOSYS,
#define ENOSYS ENOSYS

  // The socket is not connected.
  ENOTCONN,
#define ENOTCONN ENOTCONN

  // Not a directory or a symbolic link to a directory.
  ENOTDIR,
#define ENOTDIR ENOTDIR

  // Directory not empty.
  ENOTEMPTY,
#define ENOTEMPTY ENOTEMPTY

  // State not recoverable.
  ENOTRECOVERABLE,
#define ENOTRECOVERABLE ENOTRECOVERABLE

  // Not a socket.
  ENOTSOCK,
#define ENOTSOCK ENOTSOCK

  // Not supported (may be the same value as EOPNOTSUPP).
  ENOTSUP,
#define ENOTSUP ENOTSUP

  // Inappropriate I/O control operation.
  ENOTTY,
#define ENOTTY ENOTTY

  // No such device or address.
  ENXIO,
#define ENXIO ENXIO

  // Operation not supported on socket (may be the same value as
  // ENOTSUP).
  EOPNOTSUPP,
#define EOPNOTSUPP EOPNOTSUPP

  // Value too large to be stored in data type.
  EOVERFLOW,
#define EOVERFLOW EOVERFLOW

  // Previous owner died.
  EOWNERDEAD,
#define EOWNERDEAD EOWNERDEAD

  // Operation not permitted.
  EPERM,
#define EPERM EPERM

  // Broken pipe.
  EPIPE,
#define EPIPE EPIPE

  // Protocol error.
  EPROTO,
#define EPROTO EPROTO

  // Protocol not supported.
  EPROTONOSUPPORT,
#define EPROTONOSUPPORT EPROTONOSUPPORT

  // Protocol wrong type for socket.
  EPROTOTYPE,
#define EPROTOTYPE EPROTOTYPE

  // Result too large.
  ERANGE,
#define ERANGE ERANGE

  // Read-only file system.
  EROFS,
#define EROFS EROFS

  // Invalid seek.
  ESPIPE,
#define ESPIPE ESPIPE

  // No such process.
  ESRCH,
#define ESRCH ESRCH

  // Reserved.
  ESTALE,
#define ESTALE ESTALE

  // XSR: Stream ioctl() timeout.  Obsolescent.
  ETIME,
#define ETIME ETIME

  // Connection timed out.
  ETIMEDOUT,
#define ETIMEDOUT ETIMEDOUT

  // Text file busy.
  ETXTBSY,
#define ETXTBSY ETXTBSY

  // Operation would block (may be the same value as EAGAIN).
  EWOULDBLOCK,
#define EWOULDBLOCK EWOULDBLOCK

  // Cross-device link.
  EXDEV,
#define EXDEV EXDEV
};
