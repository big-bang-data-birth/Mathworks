/*
 * File: predictFromModel_initialize.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "predictFromModel_initialize.h"
#include "predictFromModel_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void predictFromModel_initialize(void)
{
  omp_init_nest_lock(&predictFromModel_nestLockGlobal);
  isInitialized_predictFromModel = true;
}

/*
 * File trailer for predictFromModel_initialize.c
 *
 * [EOF]
 */
