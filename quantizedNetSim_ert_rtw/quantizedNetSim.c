/*
 * File: quantizedNetSim.c
 *
 * Code generated for Simulink model 'quantizedNetSim'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sun Nov 16 19:54:26 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "quantizedNetSim.h"
#include "rtwtypes.h"
#include "quantizedNetSim_private.h"

/* Block signals (default storage) */
B_quantizedNetSim_T quantizedNetSim_B;

/* External inputs (root inport signals with default storage) */
ExtU_quantizedNetSim_T quantizedNetSim_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_quantizedNetSim_T quantizedNetSim_Y;

/* Real-time model */
static RT_MODEL_quantizedNetSim_T quantizedNetSim_M_;
RT_MODEL_quantizedNetSim_T *const quantizedNetSim_M = &quantizedNetSim_M_;

/* Forward declaration for local functions */
static void quantizedNetSim_KernelFcn(const int8_T aLoad0[256], const int8_T
  aFilterLoad0[256], int32_T aBiasLoad0, int32_T *aPixel0);
static void quantizedNetSim_lnt_l24e(const int8_T rtb_DataTypeConversion_l[256],
  const int8_T Weights_Value_f[2816], const int32_T Bias_Value_p[11], int32_T
  rtb_ImpAsg_InsertedFor_Output_0[2816]);
static void quantizedNetSim_KernelFcn_l(const int8_T aLoad0[11], const int8_T
  aFilterLoad0[11], int32_T aBiasLoad0, int32_T *aPixel0);
static void quantizedNetSim_lnt_l24(const int8_T rtb_PermuteDimensions_f[2816],
  const int8_T Weights_Value_a[154], const int32_T Bias_Value_o[14], int32_T
  rtb_ImpAsg_InsertedFor_Output_3[3584]);
static void quantizedNetSim_KernelFcn_l2(const int8_T aLoad0[224], const int8_T
  aFilterLoad0[224], int32_T aBiasLoad0, int32_T *aPixel0);
static void quantizedNetSim_lnt_l2(const int8_T rtb_PermuteDimensions[3584],
  const int8_T Weights_Value_b[448], const int32_T pooled2[2], int32_T
  rtb_ImpAsg_InsertedFor_Outpu_az[512]);
static void quantizedNetSim_KernelFcn_l24(const int8_T aLoad0[2], const int8_T
  aFilterLoad0[2], int32_T aBiasLoad0, int32_T *aPixel0);
static void quantizedNetSim_lnt_l(const int8_T rtb_PermuteDimensions_b[512],
  const int8_T Weights_Value[4], const int32_T Bias_Value_c[2], int32_T
  rtb_ImpAsg_InsertedFor_Output_g[512]);
static void quantizedNetSim_KernelFcn_l24e(const int8_T aLoad0[256], int8_T
  *aPixel0);
static void quantizedNetSim_lnt(const int8_T rtb_DataTypeConversion_o[512],
  int8_T rtb_ImpAsg_InsertedFor_Out1_at_[2]);
static void quantizedNetSim_KernelFcn(const int8_T aLoad0[256], const int8_T
  aFilterLoad0[256], int32_T aBiasLoad0, int32_T *aPixel0)
{
  int32_T i;
  int32_T y;

  /* Outputs for Iterator SubSystem: '<S17>/Convolution' */
  /* Sum: '<S18>/Sum of Elements' */
  y = 0;
  for (i = 0; i < 256; i++) {
    /* Sum: '<S18>/Sum of Elements' incorporates:
     *  Product: '<S18>/Product'
     */
    y += aLoad0[i] * aFilterLoad0[i];
  }

  /* EVCGNDSliceAssignment generated from: '<S18>/Output' incorporates:
   *  Sum: '<S18>/Sum'
   *  Sum: '<S18>/Sum of Elements'
   */
  *aPixel0 = y + aBiasLoad0;

  /* End of Outputs for SubSystem: '<S17>/Convolution' */
}

static void quantizedNetSim_lnt_l24e(const int8_T rtb_DataTypeConversion_l[256],
  const int8_T Weights_Value_f[2816], const int32_T Bias_Value_p[11], int32_T
  rtb_ImpAsg_InsertedFor_Output_0[2816])
{
  int32_T idx_0;
  int32_T var1;
  int32_T var2;
  int8_T Filter_Load[256];
  int8_T Img_Load[256];
  for (var2 = 0; var2 < 11; var2++) {
    for (var1 = 0; var1 < 256; var1++) {
      for (idx_0 = 0; idx_0 < 256; idx_0++) {
        if (((var1 + idx_0) - 127 < 0) || ((var1 + idx_0) - 127 >= 256)) {
          Img_Load[idx_0] = 0;
        } else {
          Img_Load[idx_0] = rtb_DataTypeConversion_l[(var1 + idx_0) - 127];
        }

        Filter_Load[idx_0] = Weights_Value_f[(var2 << 8) + idx_0];
      }

      quantizedNetSim_KernelFcn(Img_Load, Filter_Load, Bias_Value_p[var2],
        &idx_0);
      rtb_ImpAsg_InsertedFor_Output_0[var1 + (var2 << 8)] = idx_0;
    }
  }
}

static void quantizedNetSim_KernelFcn_l(const int8_T aLoad0[11], const int8_T
  aFilterLoad0[11], int32_T aBiasLoad0, int32_T *aPixel0)
{
  int32_T i;
  int32_T y;

  /* Outputs for Iterator SubSystem: '<S22>/Convolution' */
  /* Sum: '<S23>/Sum of Elements' */
  y = 0;
  for (i = 0; i < 11; i++) {
    /* Sum: '<S23>/Sum of Elements' incorporates:
     *  Product: '<S23>/Product'
     */
    y += (int16_T)(aLoad0[i] * aFilterLoad0[i]);
  }

  /* EVCGNDSliceAssignment generated from: '<S23>/Output' incorporates:
   *  Sum: '<S23>/Sum'
   *  Sum: '<S23>/Sum of Elements'
   */
  *aPixel0 = y + aBiasLoad0;

  /* End of Outputs for SubSystem: '<S22>/Convolution' */
}

static void quantizedNetSim_lnt_l24(const int8_T rtb_PermuteDimensions_f[2816],
  const int8_T Weights_Value_a[154], const int32_T Bias_Value_o[14], int32_T
  rtb_ImpAsg_InsertedFor_Output_3[3584])
{
  int32_T Pixel_Value;
  int32_T idx_1;
  int32_T var2;
  int8_T Filter_Load[11];
  int8_T Img_Load[11];
  for (var2 = 0; var2 < 14; var2++) {
    for (idx_1 = 0; idx_1 < 11; idx_1++) {
      Filter_Load[idx_1] = Weights_Value_a[11 * var2 + idx_1];
    }

    for (idx_1 = 0; idx_1 < 256; idx_1++) {
      Img_Load[0] = rtb_PermuteDimensions_f[idx_1];
      Img_Load[1] = rtb_PermuteDimensions_f[idx_1 + 256];
      Img_Load[2] = rtb_PermuteDimensions_f[idx_1 + 512];
      Img_Load[3] = rtb_PermuteDimensions_f[idx_1 + 768];
      Img_Load[4] = rtb_PermuteDimensions_f[idx_1 + 1024];
      Img_Load[5] = rtb_PermuteDimensions_f[idx_1 + 1280];
      Img_Load[6] = rtb_PermuteDimensions_f[idx_1 + 1536];
      Img_Load[7] = rtb_PermuteDimensions_f[idx_1 + 1792];
      Img_Load[8] = rtb_PermuteDimensions_f[idx_1 + 2048];
      Img_Load[9] = rtb_PermuteDimensions_f[idx_1 + 2304];
      Img_Load[10] = rtb_PermuteDimensions_f[idx_1 + 2560];
      quantizedNetSim_KernelFcn_l(Img_Load, Filter_Load, Bias_Value_o[var2],
        &Pixel_Value);
      rtb_ImpAsg_InsertedFor_Output_3[idx_1 + (var2 << 8)] = Pixel_Value;
    }
  }
}

static void quantizedNetSim_KernelFcn_l2(const int8_T aLoad0[224], const int8_T
  aFilterLoad0[224], int32_T aBiasLoad0, int32_T *aPixel0)
{
  int32_T i;
  int32_T y;

  /* Outputs for Iterator SubSystem: '<S27>/Convolution' */
  /* Sum: '<S28>/Sum of Elements' */
  y = 0;
  for (i = 0; i < 224; i++) {
    /* Sum: '<S28>/Sum of Elements' incorporates:
     *  Product: '<S28>/Product'
     */
    y += (int16_T)(aLoad0[i] * aFilterLoad0[i]);
  }

  /* EVCGNDSliceAssignment generated from: '<S28>/Output' incorporates:
   *  Sum: '<S28>/Sum'
   *  Sum: '<S28>/Sum of Elements'
   */
  *aPixel0 = y + aBiasLoad0;

  /* End of Outputs for SubSystem: '<S27>/Convolution' */
}

static void quantizedNetSim_lnt_l2(const int8_T rtb_PermuteDimensions[3584],
  const int8_T Weights_Value_b[448], const int32_T pooled2[2], int32_T
  rtb_ImpAsg_InsertedFor_Outpu_az[512])
{
  int32_T idx_0;
  int32_T idx_1;
  int32_T var1;
  int32_T var2;
  int8_T Filter_Load[224];
  int8_T Img_Load[224];
  for (var2 = 0; var2 < 2; var2++) {
    for (var1 = 0; var1 < 256; var1++) {
      for (idx_0 = 0; idx_0 < 16; idx_0++) {
        for (idx_1 = 0; idx_1 < 14; idx_1++) {
          if (((var1 + idx_0) - 7 < 0) || ((var1 + idx_0) - 7 >= 256)) {
            Img_Load[idx_0 + (idx_1 << 4)] = 0;
          } else {
            Img_Load[idx_0 + (idx_1 << 4)] = rtb_PermuteDimensions[((var1 +
              idx_0) + (idx_1 << 8)) - 7];
          }

          Filter_Load[idx_0 + (idx_1 << 4)] = Weights_Value_b[((idx_1 << 4) +
            idx_0) + 224 * var2];
        }
      }

      quantizedNetSim_KernelFcn_l2(Img_Load, Filter_Load, pooled2[var2], &idx_0);
      rtb_ImpAsg_InsertedFor_Outpu_az[var1 + (var2 << 8)] = idx_0;
    }
  }
}

static void quantizedNetSim_KernelFcn_l24(const int8_T aLoad0[2], const int8_T
  aFilterLoad0[2], int32_T aBiasLoad0, int32_T *aPixel0)
{
  /* Outputs for Iterator SubSystem: '<S32>/Convolution' */
  /* EVCGNDSliceAssignment generated from: '<S33>/Output' incorporates:
   *  Product: '<S33>/Product'
   *  Sum: '<S33>/Sum'
   *  Sum: '<S33>/Sum of Elements'
   */
  *aPixel0 = (aLoad0[0] * aFilterLoad0[0] + aLoad0[1] * aFilterLoad0[1]) +
    aBiasLoad0;

  /* End of Outputs for SubSystem: '<S32>/Convolution' */
}

static void quantizedNetSim_lnt_l(const int8_T rtb_PermuteDimensions_b[512],
  const int8_T Weights_Value[4], const int32_T Bias_Value_c[2], int32_T
  rtb_ImpAsg_InsertedFor_Output_g[512])
{
  int32_T Pixel_Value;
  int32_T var1;
  int32_T var2;
  int8_T Filter_Load[2];
  int8_T Img_Load[2];
  for (var2 = 0; var2 < 2; var2++) {
    Filter_Load[0] = Weights_Value[var2 << 1];
    Filter_Load[1] = Weights_Value[(var2 << 1) + 1];
    for (var1 = 0; var1 < 256; var1++) {
      Img_Load[0] = rtb_PermuteDimensions_b[var1];
      Img_Load[1] = rtb_PermuteDimensions_b[var1 + 256];
      quantizedNetSim_KernelFcn_l24(Img_Load, Filter_Load, Bias_Value_c[var2],
        &Pixel_Value);
      rtb_ImpAsg_InsertedFor_Output_g[var1 + (var2 << 8)] = Pixel_Value;
    }
  }
}

static void quantizedNetSim_KernelFcn_l24e(const int8_T aLoad0[256], int8_T
  *aPixel0)
{
  int32_T i;
  int32_T y;

  /* Outputs for Iterator SubSystem: '<S10>/GlobalAvgPooling' */
  /* Sum: '<S59>/Sum of Elements' */
  y = 0;
  for (i = 0; i < 256; i++) {
    int8_T rtb_ImpSel_InsertedFor_In1_at_0;

    /* EVCGNDSliceSelector generated from: '<S59>/In1' */
    rtb_ImpSel_InsertedFor_In1_at_0 = aLoad0[i];

    /* Sum: '<S59>/Sum of Elements' */
    if ((y < 0) && (rtb_ImpSel_InsertedFor_In1_at_0 < MIN_int32_T - y)) {
      y = MIN_int32_T;
    } else if ((y > 0) && (rtb_ImpSel_InsertedFor_In1_at_0 > MAX_int32_T - y)) {
      y = MAX_int32_T;
    } else {
      y += rtb_ImpSel_InsertedFor_In1_at_0;
    }
  }

  /* Product: '<S59>/Divide' incorporates:
   *  Sum: '<S59>/Sum of Elements'
   */
  i = (((uint32_T)y & 32U) != 0U) + (y >> 6);
  if (i > 127) {
    i = 127;
  } else if (i < -128) {
    i = -128;
  }

  /* EVCGNDSliceAssignment generated from: '<S59>/Out1' incorporates:
   *  Product: '<S59>/Divide'
   */
  *aPixel0 = (int8_T)i;

  /* End of Outputs for SubSystem: '<S10>/GlobalAvgPooling' */
}

static void quantizedNetSim_lnt(const int8_T rtb_DataTypeConversion_o[512],
  int8_T rtb_ImpAsg_InsertedFor_Out1_at_[2])
{
  int32_T idx_1;
  int32_T var1;
  int8_T Img_Load[256];
  int8_T Pixel_Value;
  for (var1 = 0; var1 < 2; var1++) {
    for (idx_1 = 0; idx_1 < 256; idx_1++) {
      Img_Load[idx_1] = rtb_DataTypeConversion_o[(idx_1 << 1) + var1];
    }

    quantizedNetSim_KernelFcn_l24e(Img_Load, &Pixel_Value);
    rtb_ImpAsg_InsertedFor_Out1_at_[var1] = Pixel_Value;
  }
}

/* Model step function */
void quantizedNetSim_step(void)
{
  int32_T rtb_ImpAsg_InsertedFor_Outpu_ou[512];
  int32_T rtb_ImpAsg_InsertedFor_Output_b[512];
  int32_T rtb_PermuteDimensions1_m[512];
  int32_T rtb_PermuteDimensions1_n[512];
  int32_T ForEach_itr_f;
  int32_T ntIdx0;
  int32_T ntIdx1;
  int32_T tmp;
  int32_T yElIdx;
  uint32_T qY;
  uint32_T qY_0;
  uint16_T tableLeft;
  int8_T rtb_DataTypeConversion_jj[3584];
  int8_T rtb_PermuteDimensions[3584];
  int8_T rtb_DataTypeConversion_j[2816];
  int8_T rtb_PermuteDimensions_d[2816];
  int8_T rtb_DataTypeConversion_p[512];
  int8_T rtb_PermuteDimensions_b[512];
  int8_T rtb_DataTypeConversion_m[256];
  int8_T rtb_ImpAsg_InsertedFor_Out1_at_[2];
  int8_T maxV;
  int8_T rtb_DataTypeConversion_gf_idx_0;
  int8_T rtb_DataTypeConversion_gf_idx_1;
  int8_T rtb_DataTypeConversion_gf_idx_2;
  uint8_T rtb_ImpAsg_InsertedFor_Output_0;
  uint8_T rtb_ImpAsg_InsertedFor_Output_1;
  static const uint16_T b[65] = { MAX_uint16_T, 57835U, 51039U, 45042U, 39750U,
    35079U, 30957U, 27319U, 24109U, 21276U, 18776U, 16570U, 14623U, 12905U,
    11388U, 10050U, 8869U, 7827U, 6907U, 6096U, 5380U, 4747U, 4190U, 3697U,
    3263U, 2879U, 2541U, 2243U, 1979U, 1746U, 1541U, 1360U, 1200U, 1059U, 935U,
    825U, 728U, 642U, 567U, 500U, 442U, 390U, 344U, 303U, 268U, 236U, 209U, 184U,
    162U, 143U, 127U, 112U, 99U, 87U, 77U, 68U, 60U, 53U, 47U, 41U, 36U, 32U,
    28U, 25U, 22U };

  uint16_T rtb_y_idx_0;
  uint16_T rtb_y_idx_1;
  uint16_T rtb_y_idx_2;

  /* Outputs for Atomic SubSystem: '<S1>/sequenceinput_normalization' */
  /* Outputs for Atomic SubSystem: '<S61>/Zerocenter_ForEachChannel' */
  /* Outputs for Iterator SubSystem: '<S63>/ForEach' incorporates:
   *  ForEach: '<S64>/For Each'
   */
  /* DataTypeConversion: '<S62>/Data Type Conversion' incorporates:
   *  Sum: '<S64>/Subtract'
   */
  for (ForEach_itr_f = 0; ForEach_itr_f < 256; ForEach_itr_f++) {
    /* Sum: '<S64>/Subtract' incorporates:
     *  Constant: '<S63>/Mean'
     *  ForEachSliceSelector generated from: '<S64>/In'
     *  Inport: '<Root>/sequenceinput'
     */
    yElIdx = quantizedNetSim_U.sequenceinput[ForEach_itr_f] - -74;
    if (((uint32_T)yElIdx & 2097152U) != 0U) {
      yElIdx |= -2097152;
    } else {
      yElIdx = (int32_T)((uint32_T)yElIdx & 2097151U);
    }

    yElIdx = (yElIdx + 1024) >> 11;
    if (yElIdx > 127) {
      yElIdx = 127;
    } else if (yElIdx < -128) {
      yElIdx = -128;
    }

    rtb_DataTypeConversion_m[ForEach_itr_f] = (int8_T)yElIdx;
  }

  /* End of DataTypeConversion: '<S62>/Data Type Conversion' */
  /* End of Outputs for SubSystem: '<S63>/ForEach' */
  /* End of Outputs for SubSystem: '<S61>/Zerocenter_ForEachChannel' */
  /* End of Outputs for SubSystem: '<S1>/sequenceinput_normalization' */

  /* Outputs for Atomic SubSystem: '<S1>/conv1_proj_conv' */
  /* Outputs for Atomic SubSystem: '<S15>/SingleChannel' */
  /* Outputs for Iterator SubSystem: '<S17>/Convolution' */
  /* DataTypeConversion: '<S62>/Data Type Conversion' incorporates:
   *  Constant: '<S17>/Bias'
   *  Constant: '<S17>/Weights'
   *  EVCGNDSliceAssignment generated from: '<S18>/Output'
   */
  quantizedNetSim_lnt_l24e(rtb_DataTypeConversion_m,
    quantizedNetSim_ConstP.Weights_Value_f, quantizedNetSim_ConstP.Bias_Value_p,
    quantizedNetSim_B.ImpAsg_InsertedFor_Output_i);

  /* End of Outputs for SubSystem: '<S17>/Convolution' */

  /* PermuteDimensions: '<S17>/Permute Dimensions1' incorporates:
   *  EVCGNDSliceAssignment generated from: '<S18>/Output'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 256; ntIdx1++) {
    for (ntIdx0 = 0; ntIdx0 < 11; ntIdx0++) {
      quantizedNetSim_B.PermuteDimensions1_p[yElIdx + ntIdx0] =
        quantizedNetSim_B.ImpAsg_InsertedFor_Output_i[(ntIdx0 << 8) +
        ForEach_itr_f];
    }

    yElIdx += 11;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S17>/Permute Dimensions1' */
  /* End of Outputs for SubSystem: '<S15>/SingleChannel' */

  /* DataTypeConversion: '<S19>/Data Type Conversion' incorporates:
   *  PermuteDimensions: '<S17>/Permute Dimensions1'
   */
  for (ForEach_itr_f = 0; ForEach_itr_f < 2816; ForEach_itr_f++) {
    yElIdx = quantizedNetSim_B.PermuteDimensions1_p[ForEach_itr_f];
    yElIdx = (((uint32_T)yElIdx & 256U) != 0U) + (yElIdx >> 9);
    if (yElIdx > 127) {
      yElIdx = 127;
    } else if (yElIdx < -128) {
      yElIdx = -128;
    }

    rtb_DataTypeConversion_j[ForEach_itr_f] = (int8_T)yElIdx;
  }

  /* End of DataTypeConversion: '<S19>/Data Type Conversion' */
  /* End of Outputs for SubSystem: '<S1>/conv1_proj_conv' */

  /* Outputs for Atomic SubSystem: '<S1>/conv1_proj_out' */
  /* Outputs for Atomic SubSystem: '<S20>/MultiChannel' */
  /* PermuteDimensions: '<S22>/Permute Dimensions' incorporates:
   *  DataTypeConversion: '<S19>/Data Type Conversion'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 11; ntIdx1++) {
    for (ntIdx0 = 0; ntIdx0 < 256; ntIdx0++) {
      rtb_PermuteDimensions_d[yElIdx + ntIdx0] = rtb_DataTypeConversion_j[ntIdx0
        * 11 + ForEach_itr_f];
    }

    yElIdx += 256;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S22>/Permute Dimensions' */

  /* Outputs for Iterator SubSystem: '<S22>/Convolution' */
  /* PermuteDimensions: '<S22>/Permute Dimensions' incorporates:
   *  Constant: '<S22>/Bias'
   *  Constant: '<S22>/Weights'
   *  EVCGNDSliceAssignment generated from: '<S23>/Output'
   */
  quantizedNetSim_lnt_l24(rtb_PermuteDimensions_d,
    quantizedNetSim_ConstP.Weights_Value_a, quantizedNetSim_ConstP.Bias_Value_o,
    quantizedNetSim_B.ImpAsg_InsertedFor_Output_a);

  /* End of Outputs for SubSystem: '<S22>/Convolution' */

  /* PermuteDimensions: '<S22>/Permute Dimensions1' incorporates:
   *  EVCGNDSliceAssignment generated from: '<S23>/Output'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 256; ntIdx1++) {
    for (ntIdx0 = 0; ntIdx0 < 14; ntIdx0++) {
      quantizedNetSim_B.PermuteDimensions1[yElIdx + ntIdx0] =
        quantizedNetSim_B.ImpAsg_InsertedFor_Output_a[(ntIdx0 << 8) +
        ForEach_itr_f];
    }

    yElIdx += 14;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S22>/Permute Dimensions1' */
  /* End of Outputs for SubSystem: '<S20>/MultiChannel' */

  /* Outputs for Atomic SubSystem: '<S1>/relu1' */
  for (ForEach_itr_f = 0; ForEach_itr_f < 3584; ForEach_itr_f++) {
    /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
     *  PermuteDimensions: '<S22>/Permute Dimensions1'
     */
    yElIdx = quantizedNetSim_B.PermuteDimensions1[ForEach_itr_f];
    yElIdx = (((uint32_T)yElIdx & 64U) != 0U) + (yElIdx >> 7);
    if (yElIdx > 127) {
      yElIdx = 127;
    } else if (yElIdx < -128) {
      yElIdx = -128;
    }

    /* Product: '<S11>/Product' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     */
    if (yElIdx >= 0) {
      /* Product: '<S11>/Product' incorporates:
       *  DataTypeConversion: '<S24>/Data Type Conversion'
       */
      rtb_DataTypeConversion_jj[ForEach_itr_f] = (int8_T)yElIdx;
    } else {
      /* Product: '<S11>/Product' incorporates:
       *  DataTypeConversion: '<S24>/Data Type Conversion'
       */
      rtb_DataTypeConversion_jj[ForEach_itr_f] = 0;
    }

    /* End of Product: '<S11>/Product' */
  }

  /* End of Outputs for SubSystem: '<S1>/relu1' */
  /* End of Outputs for SubSystem: '<S1>/conv1_proj_out' */

  /* Outputs for Atomic SubSystem: '<S1>/conv2_proj_conv' */
  /* Outputs for Atomic SubSystem: '<S25>/MultiChannel' */
  /* PermuteDimensions: '<S27>/Permute Dimensions' incorporates:
   *  Product: '<S11>/Product'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 14; ntIdx1++) {
    for (ntIdx0 = 0; ntIdx0 < 256; ntIdx0++) {
      rtb_PermuteDimensions[yElIdx + ntIdx0] = rtb_DataTypeConversion_jj[ntIdx0 *
        14 + ForEach_itr_f];
    }

    yElIdx += 256;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S27>/Permute Dimensions' */

  /* Outputs for Iterator SubSystem: '<S27>/Convolution' */
  /* PermuteDimensions: '<S27>/Permute Dimensions' incorporates:
   *  Constant: '<S27>/Bias'
   *  Constant: '<S27>/Weights'
   *  EVCGNDSliceAssignment generated from: '<S28>/Output'
   */
  quantizedNetSim_lnt_l2(rtb_PermuteDimensions,
    quantizedNetSim_ConstP.Weights_Value_b, quantizedNetSim_ConstP.pooled2,
    rtb_ImpAsg_InsertedFor_Output_b);

  /* End of Outputs for SubSystem: '<S27>/Convolution' */

  /* PermuteDimensions: '<S27>/Permute Dimensions1' incorporates:
   *  EVCGNDSliceAssignment generated from: '<S28>/Output'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 256; ntIdx1++) {
    rtb_PermuteDimensions1_n[yElIdx] =
      rtb_ImpAsg_InsertedFor_Output_b[ForEach_itr_f];
    rtb_PermuteDimensions1_n[yElIdx + 1] =
      rtb_ImpAsg_InsertedFor_Output_b[ForEach_itr_f + 256];
    yElIdx += 2;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S27>/Permute Dimensions1' */
  /* End of Outputs for SubSystem: '<S25>/MultiChannel' */

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  PermuteDimensions: '<S27>/Permute Dimensions1'
   */
  for (ForEach_itr_f = 0; ForEach_itr_f < 512; ForEach_itr_f++) {
    yElIdx = rtb_PermuteDimensions1_n[ForEach_itr_f];
    yElIdx = (((uint32_T)yElIdx & 1024U) != 0U) + (yElIdx >> 11);
    if (yElIdx > 127) {
      yElIdx = 127;
    } else if (yElIdx < -128) {
      yElIdx = -128;
    }

    rtb_DataTypeConversion_p[ForEach_itr_f] = (int8_T)yElIdx;
  }

  /* End of DataTypeConversion: '<S29>/Data Type Conversion' */
  /* End of Outputs for SubSystem: '<S1>/conv2_proj_conv' */

  /* Outputs for Atomic SubSystem: '<S1>/conv2_proj_out' */
  /* Outputs for Atomic SubSystem: '<S30>/MultiChannel' */
  /* PermuteDimensions: '<S32>/Permute Dimensions' incorporates:
   *  DataTypeConversion: '<S29>/Data Type Conversion'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 2; ntIdx1++) {
    for (ntIdx0 = 0; ntIdx0 < 256; ntIdx0++) {
      rtb_PermuteDimensions_b[yElIdx + ntIdx0] = rtb_DataTypeConversion_p
        [(ntIdx0 << 1) + ForEach_itr_f];
    }

    yElIdx += 256;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S32>/Permute Dimensions' */

  /* Outputs for Iterator SubSystem: '<S32>/Convolution' */
  /* PermuteDimensions: '<S32>/Permute Dimensions' incorporates:
   *  Constant: '<S32>/Bias'
   *  Constant: '<S32>/Weights'
   *  EVCGNDSliceAssignment generated from: '<S33>/Output'
   */
  quantizedNetSim_lnt_l(rtb_PermuteDimensions_b,
                        quantizedNetSim_ConstP.Weights_Value,
                        quantizedNetSim_ConstP.Bias_Value_c,
                        rtb_ImpAsg_InsertedFor_Outpu_ou);

  /* End of Outputs for SubSystem: '<S32>/Convolution' */

  /* PermuteDimensions: '<S32>/Permute Dimensions1' incorporates:
   *  EVCGNDSliceAssignment generated from: '<S33>/Output'
   */
  yElIdx = 0;
  ForEach_itr_f = 0;
  for (ntIdx1 = 0; ntIdx1 < 256; ntIdx1++) {
    rtb_PermuteDimensions1_m[yElIdx] =
      rtb_ImpAsg_InsertedFor_Outpu_ou[ForEach_itr_f];
    rtb_PermuteDimensions1_m[yElIdx + 1] =
      rtb_ImpAsg_InsertedFor_Outpu_ou[ForEach_itr_f + 256];
    yElIdx += 2;
    ForEach_itr_f++;
  }

  /* End of PermuteDimensions: '<S32>/Permute Dimensions1' */
  /* End of Outputs for SubSystem: '<S30>/MultiChannel' */

  /* Outputs for Atomic SubSystem: '<S1>/relu2' */
  for (ForEach_itr_f = 0; ForEach_itr_f < 512; ForEach_itr_f++) {
    /* DataTypeConversion: '<S34>/Data Type Conversion' incorporates:
     *  PermuteDimensions: '<S32>/Permute Dimensions1'
     */
    yElIdx = rtb_PermuteDimensions1_m[ForEach_itr_f];
    yElIdx = (((uint32_T)yElIdx & 8U) != 0U) + (yElIdx >> 4);
    if (yElIdx > 127) {
      yElIdx = 127;
    } else if (yElIdx < -128) {
      yElIdx = -128;
    }

    /* Product: '<S12>/Product' incorporates:
     *  DataTypeConversion: '<S34>/Data Type Conversion'
     *  RelationalOperator: '<S12>/GreaterThan'
     */
    if (yElIdx > 0) {
      /* Product: '<S12>/Product' incorporates:
       *  DataTypeConversion: '<S34>/Data Type Conversion'
       */
      rtb_DataTypeConversion_p[ForEach_itr_f] = (int8_T)yElIdx;
    } else {
      /* Product: '<S12>/Product' incorporates:
       *  DataTypeConversion: '<S34>/Data Type Conversion'
       */
      rtb_DataTypeConversion_p[ForEach_itr_f] = 0;
    }

    /* End of Product: '<S12>/Product' */
  }

  /* End of Outputs for SubSystem: '<S1>/relu2' */
  /* End of Outputs for SubSystem: '<S1>/conv2_proj_out' */

  /* Outputs for Atomic SubSystem: '<S1>/globalavgpool1d' */
  /* Outputs for Iterator SubSystem: '<S10>/GlobalAvgPooling' */
  /* Product: '<S12>/Product' incorporates:
   *  EVCGNDSliceAssignment generated from: '<S59>/Out1'
   */
  quantizedNetSim_lnt(rtb_DataTypeConversion_p, rtb_ImpAsg_InsertedFor_Out1_at_);

  /* End of Outputs for SubSystem: '<S10>/GlobalAvgPooling' */
  /* End of Outputs for SubSystem: '<S1>/globalavgpool1d' */

  /* Outputs for Atomic SubSystem: '<S1>/fc1_proj_in' */
  /* Sum: '<S38>/Add' incorporates:
   *  Constant: '<S6>/Weights'
   *  EVCGNDSliceAssignment generated from: '<S59>/Out1'
   *  Product: '<S6>/Matrix Multiply'
   */
  ForEach_itr_f = -105 * rtb_ImpAsg_InsertedFor_Out1_at_[0] + 66 *
    rtb_ImpAsg_InsertedFor_Out1_at_[1];
  ntIdx1 = 40 * rtb_ImpAsg_InsertedFor_Out1_at_[0] + 62 *
    rtb_ImpAsg_InsertedFor_Out1_at_[1];

  /* End of Outputs for SubSystem: '<S1>/fc1_proj_in' */

  /* Outputs for Atomic SubSystem: '<S1>/fc2_proj_in' */
  /* Product: '<S8>/Matrix Multiply' */
  yElIdx = 0;

  /* Outputs for Atomic SubSystem: '<S1>/fc1_proj_out' */
  for (ntIdx0 = 0; ntIdx0 < 128; ntIdx0++) {
    /* Outputs for Atomic SubSystem: '<S1>/fc1_proj_in' */
    /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
     *  Constant: '<S7>/Bias'
     *  Constant: '<S7>/Weights'
     *  DataTypeConversion: '<S39>/Data Type Conversion'
     *  Product: '<S7>/Matrix Multiply'
     *  Sum: '<S38>/Add'
     *  Sum: '<S44>/Add'
     */
    tmp = (((uint32_T)ForEach_itr_f & 64U) != 0U) + (ForEach_itr_f >> 7);
    if (tmp > 127) {
      tmp = 127;
    } else if (tmp < -128) {
      tmp = -128;
    }

    tmp = (((((uint32_T)ntIdx1 & 64U) != 0U) + (ntIdx1 >> 7)) *
           quantizedNetSim_ConstP.Weights_Value_e[ntIdx0 + 128] +
           quantizedNetSim_ConstP.Weights_Value_e[ntIdx0] * tmp) +
      quantizedNetSim_ConstP.Bias_Value[ntIdx0];

    /* End of Outputs for SubSystem: '<S1>/fc1_proj_in' */
    tmp = (((uint32_T)tmp & 32U) != 0U) + (tmp >> 6);
    if (tmp > 127) {
      tmp = 127;
    } else if (tmp < -128) {
      tmp = -128;
    }

    /* Product: '<S8>/Matrix Multiply' incorporates:
     *  Constant: '<S8>/Weights'
     *  DataTypeConversion: '<S45>/Data Type Conversion'
     */
    yElIdx += quantizedNetSim_ConstP.Weights_Value_dp[ntIdx0] * tmp;
  }

  /* End of Outputs for SubSystem: '<S1>/fc1_proj_out' */

  /* DataTypeConversion: '<S51>/Data Type Conversion' incorporates:
   *  Sum: '<S50>/Add'
   */
  yElIdx = (((uint32_T)yElIdx & 2048U) != 0U) + (yElIdx >> 12);
  if (yElIdx > 127) {
    yElIdx = 127;
  } else if (yElIdx < -128) {
    yElIdx = -128;
  }

  /* Outputs for Atomic SubSystem: '<S1>/fc2_proj_out' */
  /* DataTypeConversion: '<S57>/Data Type Conversion' incorporates:
   *  Constant: '<S9>/Weights'
   *  DataTypeConversion: '<S51>/Data Type Conversion'
   *  Product: '<S9>/Matrix Multiply'
   */
  rtb_DataTypeConversion_gf_idx_0 = (int8_T)(((yElIdx << 3) + 76) >> 7);
  rtb_DataTypeConversion_gf_idx_1 = (int8_T)((-88 * yElIdx + 53) >> 7);
  rtb_DataTypeConversion_gf_idx_2 = (int8_T)((12 * yElIdx + 49) >> 7);

  /* End of Outputs for SubSystem: '<S1>/fc2_proj_out' */
  /* End of Outputs for SubSystem: '<S1>/fc2_proj_in' */

  /* Outputs for Atomic SubSystem: '<S1>/softmax' */
  /* Outputs for Iterator SubSystem: '<S14>/AlongChannels' incorporates:
   *  ForEach: '<S65>/For Each'
   */
  /* MinMax: '<S69>/Max' incorporates:
   *  DataTypeConversion: '<S57>/Data Type Conversion'
   *  ForEachSliceSelector generated from: '<S65>/In1'
   */
  maxV = rtb_DataTypeConversion_gf_idx_0;
  if (rtb_DataTypeConversion_gf_idx_0 < rtb_DataTypeConversion_gf_idx_1) {
    maxV = rtb_DataTypeConversion_gf_idx_1;
  }

  if (maxV < rtb_DataTypeConversion_gf_idx_2) {
    maxV = rtb_DataTypeConversion_gf_idx_2;
  }

  /* Sum: '<S69>/Subtract' incorporates:
   *  DataTypeConversion: '<S57>/Data Type Conversion'
   *  ForEachSliceSelector generated from: '<S65>/In1'
   *  MinMax: '<S69>/Max'
   */
  yElIdx = maxV - rtb_DataTypeConversion_gf_idx_0;
  if (yElIdx < 0) {
    yElIdx = 0;
  }

  /* MATLAB Function: '<S69>/exp_lookup' incorporates:
   *  Sum: '<S69>/Subtract'
   */
  if (yElIdx > 1) {
    rtb_y_idx_2 = MAX_uint16_T;
  } else {
    rtb_y_idx_2 = (uint16_T)(yElIdx << 15);
  }

  if (rtb_y_idx_2 > 65528) {
    rtb_y_idx_2 = 65528U;
  }

  yElIdx = (int32_T)((uint32_T)rtb_y_idx_2 >> 10);
  tableLeft = b[yElIdx];
  rtb_y_idx_0 = (uint16_T)(tableLeft - (((uint16_T)(tableLeft - b[yElIdx + 1]) *
    (rtb_y_idx_2 & 1023U)) >> 10));

  /* Sum: '<S69>/Subtract' incorporates:
   *  DataTypeConversion: '<S57>/Data Type Conversion'
   *  ForEachSliceSelector generated from: '<S65>/In1'
   *  MinMax: '<S69>/Max'
   */
  yElIdx = maxV - rtb_DataTypeConversion_gf_idx_1;
  if (yElIdx < 0) {
    yElIdx = 0;
  }

  /* MATLAB Function: '<S69>/exp_lookup' incorporates:
   *  Sum: '<S69>/Subtract'
   */
  if (yElIdx > 1) {
    rtb_y_idx_2 = MAX_uint16_T;
  } else {
    rtb_y_idx_2 = (uint16_T)(yElIdx << 15);
  }

  if (rtb_y_idx_2 > 65528) {
    rtb_y_idx_2 = 65528U;
  }

  yElIdx = (int32_T)((uint32_T)rtb_y_idx_2 >> 10);
  tableLeft = b[yElIdx];
  rtb_y_idx_1 = (uint16_T)(tableLeft - (((uint16_T)(tableLeft - b[yElIdx + 1]) *
    (rtb_y_idx_2 & 1023U)) >> 10));

  /* Sum: '<S69>/Subtract' incorporates:
   *  DataTypeConversion: '<S57>/Data Type Conversion'
   *  ForEachSliceSelector generated from: '<S65>/In1'
   *  MinMax: '<S69>/Max'
   */
  yElIdx = maxV - rtb_DataTypeConversion_gf_idx_2;
  if (yElIdx < 0) {
    yElIdx = 0;
  }

  /* MATLAB Function: '<S69>/exp_lookup' incorporates:
   *  Sum: '<S69>/Subtract'
   */
  if (yElIdx > 1) {
    rtb_y_idx_2 = MAX_uint16_T;
  } else {
    rtb_y_idx_2 = (uint16_T)(yElIdx << 15);
  }

  if (rtb_y_idx_2 > 65528) {
    rtb_y_idx_2 = 65528U;
  }

  yElIdx = (int32_T)((uint32_T)rtb_y_idx_2 >> 10);
  tableLeft = b[yElIdx];
  rtb_y_idx_2 = (uint16_T)(tableLeft - (((uint16_T)(tableLeft - b[yElIdx + 1]) *
    (rtb_y_idx_2 & 1023U)) >> 10));

  /* Sum: '<S65>/Sum of Elements' */
  qY_0 = (uint32_T)rtb_y_idx_0 + rtb_y_idx_1;
  if (qY_0 < rtb_y_idx_0) {
    qY_0 = MAX_uint32_T;
  }

  qY = qY_0 + rtb_y_idx_2;
  if (qY < qY_0) {
    qY = MAX_uint32_T;
  }

  /* Product: '<S65>/OutDivide' incorporates:
   *  Sum: '<S65>/Sum of Elements'
   */
  if (qY == 0U) {
    qY_0 = MAX_uint32_T;

    /* Divide by zero handler */
  } else {
    qY_0 = (((uint32_T)rtb_y_idx_0 << 8) + (qY >> 1)) / qY;
  }

  if (qY_0 > 255U) {
    qY_0 = 255U;
  }

  /* ForEachSliceAssignment generated from: '<S65>/Output' incorporates:
   *  Product: '<S65>/OutDivide'
   */
  rtb_ImpAsg_InsertedFor_Output_0 = (uint8_T)qY_0;

  /* Product: '<S65>/OutDivide' incorporates:
   *  Sum: '<S65>/Sum of Elements'
   */
  if (qY == 0U) {
    qY_0 = MAX_uint32_T;

    /* Divide by zero handler */
  } else {
    qY_0 = (((uint32_T)rtb_y_idx_1 << 8) + (qY >> 1)) / qY;
  }

  if (qY_0 > 255U) {
    qY_0 = 255U;
  }

  /* ForEachSliceAssignment generated from: '<S65>/Output' incorporates:
   *  Product: '<S65>/OutDivide'
   */
  rtb_ImpAsg_InsertedFor_Output_1 = (uint8_T)qY_0;

  /* Product: '<S65>/OutDivide' incorporates:
   *  Sum: '<S65>/Sum of Elements'
   */
  if (qY == 0U) {
    qY_0 = MAX_uint32_T;

    /* Divide by zero handler */
  } else {
    qY_0 = (((uint32_T)rtb_y_idx_2 << 8) + (qY >> 1)) / qY;
  }

  if (qY_0 > 255U) {
    qY_0 = 255U;
  }

  /* End of Outputs for SubSystem: '<S14>/AlongChannels' */
  /* End of Outputs for SubSystem: '<S1>/softmax' */

  /* Outport: '<Root>/out1' incorporates:
   *  DataTypeConversion: '<S1>/softmax_out_cast'
   *  ForEachSliceAssignment generated from: '<S65>/Output'
   *  Product: '<S65>/OutDivide'
   */
  quantizedNetSim_Y.out1[0] = (real32_T)rtb_ImpAsg_InsertedFor_Output_0 *
    0.00390625F;
  quantizedNetSim_Y.out1[1] = (real32_T)rtb_ImpAsg_InsertedFor_Output_1 *
    0.00390625F;

  /* Outputs for Atomic SubSystem: '<S1>/softmax' */
  /* Outputs for Iterator SubSystem: '<S14>/AlongChannels' incorporates:
   *  ForEach: '<S65>/For Each'
   */
  quantizedNetSim_Y.out1[2] = (real32_T)(uint8_T)qY_0 * 0.00390625F;

  /* End of Outputs for SubSystem: '<S14>/AlongChannels' */
  /* End of Outputs for SubSystem: '<S1>/softmax' */
}

/* Model initialize function */
void quantizedNetSim_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void quantizedNetSim_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
