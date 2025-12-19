/*
 * File: introsort.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "introsort.h"
#include "cellstr_sort.h"
#include "heapsort.h"
#include "insertionsort.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  int xstart;
  int xend;
  int depth;
} struct_T;
#endif /* typedef_struct_T */

/* Function Definitions */
/*
 * Arguments    : const cell_wrap_0 cmp_workspace_c[102]
 *                int x[102]
 * Return Type  : void
 */
void introsort(const cell_wrap_0 cmp_workspace_c[102], int x[102])
{
  static const int offsets[4] = {0, 1, 2, 3};
  struct_T st_d[24];
  int i;
  int st_n;
  for (i = 0; i <= 96; i += 4) {
    _mm_storeu_si128(
        (__m128i *)&x[i],
        _mm_add_epi32(
            _mm_set1_epi32(1),
            _mm_add_epi32(_mm_set1_epi32(i),
                          _mm_loadu_si128((const __m128i *)&offsets[0]))));
  }
  x[100] = 101;
  x[101] = 102;
  st_d[0].xstart = 1;
  st_d[0].xend = 102;
  st_d[0].depth = 0;
  st_n = 1;
  while (st_n > 0) {
    struct_T expl_temp;
    int j;
    int pivot;
    int s_depth;
    int xmid;
    expl_temp = st_d[st_n - 1];
    j = st_d[st_n - 1].xstart - 1;
    pivot = st_d[st_n - 1].xend - 1;
    s_depth = st_d[st_n - 1].depth;
    st_n--;
    xmid = expl_temp.xend - expl_temp.xstart;
    if (xmid + 1 <= 32) {
      insertionsort(x, expl_temp.xstart, expl_temp.xend, cmp_workspace_c);
    } else if (expl_temp.depth == 12) {
      b_heapsort(x, expl_temp.xstart, expl_temp.xend, cmp_workspace_c);
    } else {
      int t;
      xmid = (expl_temp.xstart + xmid / 2) - 1;
      if (cellstr_sort_anonFcn1(cmp_workspace_c, x[xmid], x[j])) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[xmid];
        x[xmid] = t;
      }
      if (cellstr_sort_anonFcn1(cmp_workspace_c, x[pivot], x[j])) {
        t = x[expl_temp.xstart - 1];
        x[expl_temp.xstart - 1] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      if (cellstr_sort_anonFcn1(cmp_workspace_c, x[pivot], x[xmid])) {
        t = x[xmid];
        x[xmid] = x[expl_temp.xend - 1];
        x[expl_temp.xend - 1] = t;
      }
      pivot = x[xmid];
      x[xmid] = x[expl_temp.xend - 2];
      x[expl_temp.xend - 2] = pivot;
      xmid = expl_temp.xstart - 1;
      j = expl_temp.xend - 2;
      int exitg1;
      do {
        exitg1 = 0;
        xmid++;
        while (cellstr_sort_anonFcn1(cmp_workspace_c, x[xmid], pivot)) {
          xmid++;
        }
        j--;
        while (cellstr_sort_anonFcn1(cmp_workspace_c, pivot, x[j])) {
          j--;
        }
        if (xmid + 1 >= j + 1) {
          exitg1 = 1;
        } else {
          t = x[xmid];
          x[xmid] = x[j];
          x[j] = t;
        }
      } while (exitg1 == 0);
      x[expl_temp.xend - 2] = x[xmid];
      x[xmid] = pivot;
      if (xmid + 2 < expl_temp.xend) {
        st_d[st_n].xstart = xmid + 2;
        st_d[st_n].xend = expl_temp.xend;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
      if (expl_temp.xstart < xmid + 1) {
        st_d[st_n].xstart = expl_temp.xstart;
        st_d[st_n].xend = xmid + 1;
        st_d[st_n].depth = s_depth + 1;
        st_n++;
      }
    }
  }
}

/*
 * File trailer for introsort.c
 *
 * [EOF]
 */
