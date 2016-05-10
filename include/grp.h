// grp.h - group structure
// #include <grp.h>

// The <grp.h> header shall declare the group structure, which shall
// include the following members:
struct group
{
  char   *gr_name; // The name of the group.
  gid_t   gr_gid;  // Numerical group ID.
  char  **gr_mem;  // Pointer to a null-terminated array of character
                   // pointers to member names.
};

// The <grp.h> header shall define the gid_t and size_t types as
// described in <sys/types.h>.
#include <sys/types.h>

// The following shall be declared as functions and may also be defined
// as macros. Function prototypes shall be provided.
// XSI.
void           endgrent(void);
// XSI.
struct group  *getgrent(void);

struct group  *getgrgid(gid_t);
int            getgrgid_r(gid_t, struct group *, char *,
                  size_t, struct group **);
struct group  *getgrnam(const char *);
int            getgrnam_r(const char *, struct group *, char *,
                  size_t , struct group **);

// XSI.
void           setgrent(void);
