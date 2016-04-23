// arpa/inet.h - definitions for internet operations
// #include <arpa/inet.h>

// in_port_t, in_addr_t, struct in_addr, INET_ADDRSTRLEN, and INET6_ADDRSTRLEN.
#include <netinet/in.h>
// uint16_t, uint32_t.
#include <inttypes.h>

// The following shall be declared as functions, or defined as macros,
// or both. If functions are declared, function prototypes shall be
// provided.
uint32_t htonl(uint32_t);
uint16_t htons(uint16_t);
uint32_t ntohl(uint32_t);
uint16_t ntohs(uint16_t);

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
in_addr_t   inet_addr(const char *);
char       *inet_ntoa(struct in_addr);
const char *inet_ntop(
              int,
              const void *restrict,
              char *restrict,
              socklen_t);
int         inet_pton(
              int,
              const char *restrict,
              void *restrict);

// Inclusion of the <arpa/inet.h> header may also make visible all
// symbols from <netinet/in.h> and <inttypes.h>.
