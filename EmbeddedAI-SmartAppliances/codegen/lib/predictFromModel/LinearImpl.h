/*
 * File: LinearImpl.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef LINEARIMPL_H
#define LINEARIMPL_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void LinearImpl_score(const double this_Beta[6], double this_Bias,
                      const double X[612], const boolean_T indsToExclude[102],
                      double s[102]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for LinearImpl.h
 *
 * [EOF]
 */
