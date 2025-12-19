/*
 * File: Linear.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef LINEAR_H
#define LINEAR_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void Linear_score(const double this_Impl_Beta[6], double this_Impl_Bias,
                  const double X[612], const boolean_T indsToExclude[102],
                  double s[102]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for Linear.h
 *
 * [EOF]
 */
