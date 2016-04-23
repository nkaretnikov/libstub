// aio.h - asynchronous input and output
// #include <aio.h>

// Used for file sizes.
// off_t shall be a signed integer type.
typedef int off_t;

// Used to identify a thread attribute object.
// Has no defined comparison or assignment operators.
//
// XXX: <sys/types.h> in POSIX has no info about the fields, leaving empty for
// now.
union pthread_attr_t {};
typedef union pthread_attr_t pthread_attr_t;

// Used for sizes of objects.
// size_t shall be an unsigned integer type.
typedef unsigned int size_t;

// Used for a count of bytes or an error indication.
// ssize_t shall be a signed integer type.
typedef int ssize_t;

// The tag sigevent shall be declared as naming an incomplete structure type, the
// contents of which are described in the <signal.h>
//
// XXX: <signal.h> in POSIX has no info about the fields, leaving empty for now.
struct sigevent {};

struct aiocb
{
  int             aio_fildes     // File descriptor.
  off_t           aio_offset     // File offset.
  volatile void  *aio_buf        // Location of buffer.
  size_t          aio_nbytes     // Length of transfer.
  int             aio_reqprio    // Request priority offset.
  struct sigevent aio_sigevent   // Signal number and value.
  int             aio_lio_opcode // Operation to be performed.
};

// XXX: <time.h> in POSIX has no info about the fields, leaving empty for now.
struct timespec {};

// Symbolic constants.
enum
{
  // A return value indicating that all requested operations have been canceled.
  AIO_CANCELED,
#define AIO_CANCELED AIO_CANCELED
  // A return value indicating that some of the requested operations could not
  // be canceled since they are in progress.
  AIO_NOTCANCELED,
#define AIO_NOTCANCELED AIO_NOTCANCELED
  // A return value indicating that none of the requested operations could be
  // canceled since they are already complete.
  AIO_ALLDONE
#define AIO_ALLDONE AIO_ALLDONE
};

enum
{
  // A lio_listio() element operation option indicating that no transfer is
  // requested.
  LIO_NOP,
#define LIO_NOP LIO_NOP
  // A lio_listio() synchronization operation indicating that the calling thread
  // is to continue execution while the lio_listio() operation is being
  // performed, and no notification is given when the operation is complete.
  LIO_NOWAIT,
#define LIO_NOWAIT LIO_NOWAIT
  // A lio_listio() element operation option requesting a read.
  LIO_READ,
#define LIO_READ LIO_READ
  // A lio_listio() synchronization operation indicating that the calling thread
  // is to suspend until the lio_listio() operation is complete.
  LIO_WAIT,
#define LIO_WAIT LIO_WAIT
  // A lio_listio() element operation option requesting a write.
  LIO_WRITE
#define LIO_WRITE LIO_WRITE
};

// Functions, which may also be defined as macros. Function prototypes shall be
// provided.
int     aio_cancel(int, struct aiocb *);
int     aio_error(const struct aiocb *);
int     aio_fsync(int, struct aiocb *);
int     aio_read(struct aiocb *);
ssize_t aio_return(struct aiocb *);
int     aio_suspend(
          const struct aiocb *const [],
          int,
          const struct timespec *);
int     aio_write(struct aiocb *);
int     lio_listio(
          int,
          struct aiocb *restrict const [restrict],
          int,
          struct sigevent *restrict);

// Inclusion of the <aio.h> header may make visible symbols defined in the
// headers <fcntl.h>, <signal.h>, and <time.h>.
