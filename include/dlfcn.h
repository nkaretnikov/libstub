// dlfcn.h - dynamic linking
// #include <dlfcn.h>

// Constants for use in the construction of a dlopen() mode argument:
enum
{
  // Relocations are performed at an implementation-defined time.
  RTLD_LAZY,
#define RTLD_LAZY RTLD_LAZY
  // Relocations are performed when the object is loaded.
  RTLD_NOW,
#define RTLD_NOW RTLD_NOW
  // All symbols are available for relocation processing of other modules.
  RTLD_GLOBAL,
#define RTLD_GLOBAL RTLD_GLOBAL
  // All symbols are not made available for relocation processing by
  // other modules.
  RTLD_LOCAL
#define RTLD_LOCAL RTLD_LOCAL
};

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
int   dlclose(void *);
char *dlerror(void);
void *dlopen(const char *, int);
void *dlsym(void *restrict, const char *restrict);
