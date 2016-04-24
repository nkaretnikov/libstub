// assert.h - verify program assertion
// #include <assert.h>

/*
 * The <assert.h> header shall define the assert() macro. It refers to
 * the macro NDEBUG which is not defined in the header. If NDEBUG is
 * defined as a macro name before the inclusion of this header, the
 * assert() macro shall be defined simply as:
 *   #define assert(ignore)((void) 0)
 *
 * Otherwise, the macro behaves as described in assert().
 * The assert() macro shall be redefined according to the current state
 * of NDEBUG each time <assert.h> is included.
 * The assert() macro shall be implemented as a macro, not as a
 * function. If the macro definition is suppressed in order to access an actual
 * function, the behavior is undefined.
 */

extern void __assert_fail(const char *, const char *, int, const char *);

// XXX: __func__ requires C99.
#ifdef NDEBUG
  #define assert(ignore)((void) 0)
#else
  #define assert(expr)  \
    ((expr)             \
     ? (void) 0         \
     : __assert_fail(#expr, __FILE__, __LINE__, __func__))
#endif
