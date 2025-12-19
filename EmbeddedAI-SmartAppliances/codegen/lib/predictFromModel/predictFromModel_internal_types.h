/*
 * File: predictFromModel_internal_types.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef PREDICTFROMMODEL_INTERNAL_TYPES_H
#define PREDICTFROMMODEL_INTERNAL_TYPES_H

/* Include Files */
#include "predictFromModel_types.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef c_typedef_c_incremental_coder_i
#define c_typedef_c_incremental_coder_i
typedef struct {
  double Beta[6];
  double Bias;
} c_incremental_coder_impl_ScaleI;
#endif /* c_typedef_c_incremental_coder_i */

#ifndef d_typedef_c_incremental_coder_i
#define d_typedef_c_incremental_coder_i
typedef struct {
  double ClassNames[2];
  double Prior[2];
  c_incremental_coder_impl_ScaleI Impl;
} c_incremental_coder_incremental;
#endif /* d_typedef_c_incremental_coder_i */

#ifndef typedef_cell_wrap_35
#define typedef_cell_wrap_35
typedef struct {
  double f1[306];
} cell_wrap_35;
#endif /* typedef_cell_wrap_35 */

#endif
/*
 * File trailer for predictFromModel_internal_types.h
 *
 * [EOF]
 */
