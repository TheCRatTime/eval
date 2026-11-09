#define EVAL_SOURCE
#include "include/eval.h"

int main(void) {
  /* Some hard expression */
  const char* expr = "(6 * 7 - 22) * 5 + (75 * 2) - 50 - 33";
  double res = eval(expr);

  /* expected 167 */
  printf("eval(\"%s\") = %g (or %.2f)\n", expr, res, res);

  return 0;
}
