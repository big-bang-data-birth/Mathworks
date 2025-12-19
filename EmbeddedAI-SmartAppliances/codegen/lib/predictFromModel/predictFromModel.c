/*
 * File: predictFromModel.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "predictFromModel.h"
#include "incrementalClassificationECOC.h"
#include "predictFromModel_data.h"
#include "predictFromModel_initialize.h"
#include "predictFromModel_internal_types.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * PREDICTFROMMODEL Label new observations using trained model
 *
 * Arguments    : const double x[612]
 *                categorical *label
 * Return Type  : void
 */
void predictFromModel(const double x[612], categorical *label)
{
  c_incremental_coder_incremental t3_Impl_BinaryLearners[3];
  cell_wrap_0 t3_ClassNames_categoryNames[3];
  double t3_Prior[3];
  unsigned char t3_ClassNames_codes[3];
  boolean_T c_t3_Impl_BinaryLearnersSeenCla[6];
  if (!isInitialized_predictFromModel) {
    predictFromModel_initialize();
  }
  c_incrementalClassificationECOC(
      t3_ClassNames_codes, t3_ClassNames_categoryNames, t3_Prior,
      t3_Impl_BinaryLearners, c_t3_Impl_BinaryLearnersSeenCla);
  label->categoryNames.size[0] = d_incrementalClassificationECOC(
      t3_ClassNames_codes, t3_ClassNames_categoryNames, t3_Prior,
      t3_Impl_BinaryLearners, x, label->codes, label->categoryNames.data);
}

/*
 * File trailer for predictFromModel.c
 *
 * [EOF]
 */
