// fnmatch.h - filename-matching types
// #include <fnmatch.h>

// The <fnmatch.h> header shall define the following symbolic constants:
enum
{
  // The string does not match the specified pattern.
  FNM_NOMATCH,
#define FNM_NOMATCH FNM_NOMATCH
  // <slash> in string only matches <slash> in pattern.
  FNM_PATHNAME,
#define FNM_PATHNAME FNM_PATHNAME
  // Leading <period> in string must be exactly matched by <period>
  // in pattern.
  FNM_PERIOD,
#define FNM_PERIOD FNM_PERIOD
  // Disable backslash escaping.
  FNM_NOESCAPE
#define FNM_NOESCAPE FNM_NOESCAPE
};

// The following shall be declared as a function and may also be defined
// as a macro. A function prototype shall be provided.
int fnmatch(const char *, const char *, int);
