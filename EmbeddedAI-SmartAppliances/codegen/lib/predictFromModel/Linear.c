/*
 * File: Linear.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "Linear.h"
#include "LinearImpl.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const double this_Impl_Beta[6]
 *                double this_Impl_Bias
 *                const double X[612]
 *                const boolean_T indsToExclude[102]
 *                double s[102]
 * Return Type  : void
 */
void Linear_score(const double this_Impl_Beta[6], double this_Impl_Bias,
                  const double X[612], const boolean_T indsToExclude[102],
                  double s[102])
{
  LinearImpl_score(this_Impl_Beta, this_Impl_Bias, X, indsToExclude, s);
}

/*
 * File trailer for Linear.c
 *
 * [EOF]
 */
