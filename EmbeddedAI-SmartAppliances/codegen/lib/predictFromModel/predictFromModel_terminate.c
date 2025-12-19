/*
 * File: predictFromModel_terminate.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "predictFromModel_terminate.h"
#include "predictFromModel_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void predictFromModel_terminate(void)
{
  omp_destroy_nest_lock(&predictFromModel_nestLockGlobal);
  isInitialized_predictFromModel = false;
}

/*
 * File trailer for predictFromModel_terminate.c
 *
 * [EOF]
 */
