/*
 * File: LinearImpl.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "LinearImpl.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double this_Beta[6]
 *                double this_Bias
 *                const double X[612]
 *                const boolean_T indsToExclude[102]
 *                double s[102]
 * Return Type  : void
 */
void LinearImpl_score(const double this_Beta[6], double this_Bias,
                      const double X[612], const boolean_T indsToExclude[102],
                      double s[102])
{
  int i;
  int ii;
  for (ii = 0; ii < 102; ii++) {
    s[ii] = rtNaN;
    if (!indsToExclude[ii]) {
      double b_X;
      b_X = 0.0;
      for (i = 0; i < 6; i++) {
        b_X += X[ii + 102 * i] * this_Beta[i];
      }
      s[ii] = b_X + this_Bias;
    }
  }
}

/*
 * File trailer for LinearImpl.c
 *
 * [EOF]
 */
