/*
 * File: incrementalClassificationECOC.h
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

#ifndef INCREMENTALCLASSIFICATIONECOC_H
#define INCREMENTALCLASSIFICATIONECOC_H

/* Include Files */
#include "predictFromModel_internal_types.h"
#include "predictFromModel_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_incrementalClassificationECOC(
    unsigned char this_ClassNames_codes[3],
    cell_wrap_0 this_ClassNames_categoryNames[3], double this_Prior[3],
    c_incremental_coder_incremental this_Impl_BinaryLearners[3],
    boolean_T c_this_Impl_BinaryLearnersSeenC[6]);

int d_incrementalClassificationECOC(
    const unsigned char this_ClassNames_codes[3],
    const cell_wrap_0 this_ClassNames_categoryNames[3],
    const double this_Prior[3],
    const c_incremental_coder_incremental this_Impl_BinaryLearners[3],
    const double X[612], unsigned char varargout_1_codes[102],
    cell_wrap_0 varargout_1_categoryNames_data[]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for incrementalClassificationECOC.h
 *
 * [EOF]
 */
