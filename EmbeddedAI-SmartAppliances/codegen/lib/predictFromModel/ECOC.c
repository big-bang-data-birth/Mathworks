/*
 * File: ECOC.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "ECOC.h"
#include "Linear.h"
#include "predictFromModel_internal_types.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Function Definitions */
/*
 * Arguments    : const c_incremental_coder_incremental this_Impl_BinaryLearners[3]
 *                const double X[612]
 *                cell_wrap_35 s[2]
 * Return Type  : void
 */
void ECOC_score(
    const c_incremental_coder_incremental this_Impl_BinaryLearners[3],
    const double X[612], cell_wrap_35 s[2])
{
  static const signed char iv[9] = {1, -1, 0, 1, 0, -1, 0, 1, -1};
  __m128d r;
  double c[306];
  double vloss[306];
  double scores[204];
  double classnum[102];
  double M[9];
  double d1;
  int b_k;
  int c_k;
  int ii;
  int jj;
  int k;
  int l;
  boolean_T indsToExclude[102];
  boolean_T exitg1;
  for (k = 0; k < 9; k++) {
    M[k] = iv[k];
  }
#pragma omp parallel for num_threads(omp_get_max_threads()) private(           \
        jj, scores, classnum, indsToExclude, ii, exitg1, d1)

  for (l = 0; l < 3; l++) {
    M[(l << 1) + 2] = rtNaN;
    for (ii = 0; ii < 102; ii++) {
      indsToExclude[ii] = false;
      jj = 0;
      exitg1 = false;
      while ((!exitg1) && (jj < 6)) {
        if (rtIsNaN(X[ii + 102 * jj])) {
          indsToExclude[ii] = true;
          exitg1 = true;
        } else {
          jj++;
        }
      }
    }
    Linear_score(this_Impl_BinaryLearners[l].Impl.Beta,
                 this_Impl_BinaryLearners[l].Impl.Bias, X, indsToExclude,
                 classnum);
    for (ii = 0; ii < 204; ii++) {
      scores[ii] = rtNaN;
    }
    for (ii = 0; ii < 102; ii++) {
      if (!indsToExclude[ii]) {
        d1 = classnum[ii];
        scores[ii] = -d1;
        scores[ii + 102] = d1;
      }
      s[1].f1[ii + 102 * l] = scores[ii + 102];
    }
  }
  for (b_k = 0; b_k < 3; b_k++) {
    double maxval[306];
    double d;
    int counts[102];
    int xoffset;
    for (k = 0; k < 3; k++) {
      for (c_k = 0; c_k <= 100; c_k += 2) {
        xoffset = c_k + 102 * k;
        r = _mm_loadu_pd(&s[1].f1[xoffset]);
        _mm_storeu_pd(&c[xoffset], _mm_mul_pd(_mm_set1_pd(M[b_k + 3 * k]), r));
      }
    }
    for (k = 0; k < 306; k++) {
      d = 1.0 - c[k];
      c[k] = d;
      if (rtIsNaN(d) || (d > 0.0)) {
        maxval[k] = d;
      } else {
        maxval[k] = 0.0;
      }
    }
    for (k = 0; k < 102; k++) {
      d = maxval[k];
      if (rtIsNaN(d)) {
        classnum[k] = 0.0;
        counts[k] = 0;
      } else {
        classnum[k] = d;
        counts[k] = 1;
      }
    }
    for (k = 0; k < 2; k++) {
      xoffset = (k + 1) * 102;
      for (c_k = 0; c_k < 102; c_k++) {
        d = maxval[xoffset + c_k];
        if (!rtIsNaN(d)) {
          classnum[c_k] += d;
          counts[c_k]++;
        }
      }
    }
    for (k = 0; k < 102; k++) {
      vloss[k + 102 * b_k] = classnum[k] / (double)counts[k] / 2.0;
    }
  }
  for (k = 0; k <= 304; k += 2) {
    r = _mm_loadu_pd(&vloss[k]);
    _mm_storeu_pd(&s[0].f1[k], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
}

/*
 * File trailer for ECOC.c
 *
 * [EOF]
 */
