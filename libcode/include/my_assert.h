#ifndef LIB_MYASSERT_H_
#define LIB_MYASSERT_H_

#ifdef ASSERT_ON
#define ASSERT(expr)                                                          \
  if ((expr) == 0) {                                                          \
    printf(BOLD RED "#  ERROR:\n");                                           \
    printf(         "#    %s\n", #expr);                                      \
    printf(         "#    file: %s\n", __FILE__);                             \
    printf(         "#    func: %s\n" RESET, __PRETTY_FUNCTION__);            \
    abort();                                                                  \
    }
#else
#define ASSERT(expr) ;
#endif // ASSERT_ON

#endif // LIB_MYASSERT_H_
