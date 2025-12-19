/*
 * File: insertionsort.c
 *
 * MATLAB Coder version            : 25.2
 * C/C++ source code generated on  : 15-Nov-2025 17:48:27
 */

/* Include Files */
#include "insertionsort.h"
#include "cellstr_sort.h"
#include "predictFromModel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : int x[102]
 *                int xstart
 *                int xend
 *                const cell_wrap_0 cmp_workspace_c[102]
 * Return Type  : void
 */
void insertionsort(int x[102], int xstart, int xend,
                   const cell_wrap_0 cmp_workspace_c[102])
{
  int i;
  int k;
  i = xstart + 1;
  for (k = i; k <= xend; k++) {
    int idx;
    int xc;
    xc = x[k - 1];
    idx = k - 1;
    while ((idx >= xstart) &&
           cellstr_sort_anonFcn1(cmp_workspace_c, xc, x[idx - 1])) {
      x[idx] = x[idx - 1];
      idx--;
    }
    x[idx] = xc;
  }
}

/*
 * File trailer for insertionsort.c
 *
 * [EOF]
 */
