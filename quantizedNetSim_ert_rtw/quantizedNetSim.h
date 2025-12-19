/*
 * File: quantizedNetSim.h
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

#ifndef quantizedNetSim_h_
#define quantizedNetSim_h_
#ifndef quantizedNetSim_COMMON_INCLUDES_
#define quantizedNetSim_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* quantizedNetSim_COMMON_INCLUDES_ */

#include "quantizedNetSim_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  int32_T ImpAsg_InsertedFor_Output_a[3584];/* '<S23>/Sum' */
  int32_T PermuteDimensions1[3584];    /* '<S22>/Permute Dimensions1' */
  int32_T ImpAsg_InsertedFor_Output_i[2816];/* '<S18>/Sum' */
  int32_T PermuteDimensions1_p[2816];  /* '<S17>/Permute Dimensions1' */
} B_quantizedNetSim_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S6>/Bias'
   *   '<S27>/Bias'
   */
  int32_T pooled2[2];

  /* Computed Parameter: Bias_Value
   * Referenced by: '<S7>/Bias'
   */
  int32_T Bias_Value[128];

  /* Computed Parameter: Bias_Value_p
   * Referenced by: '<S17>/Bias'
   */
  int32_T Bias_Value_p[11];

  /* Computed Parameter: Bias_Value_c
   * Referenced by: '<S32>/Bias'
   */
  int32_T Bias_Value_c[2];

  /* Computed Parameter: Bias_Value_o
   * Referenced by: '<S22>/Bias'
   */
  int32_T Bias_Value_o[14];

  /* Computed Parameter: Weights_Value
   * Referenced by: '<S32>/Weights'
   */
  int8_T Weights_Value[4];

  /* Computed Parameter: Weights_Value_a
   * Referenced by: '<S22>/Weights'
   */
  int8_T Weights_Value_a[154];

  /* Computed Parameter: Weights_Value_e
   * Referenced by: '<S7>/Weights'
   */
  int8_T Weights_Value_e[256];

  /* Computed Parameter: Weights_Value_dp
   * Referenced by: '<S8>/Weights'
   */
  int8_T Weights_Value_dp[128];

  /* Computed Parameter: Weights_Value_f
   * Referenced by: '<S17>/Weights'
   */
  int8_T Weights_Value_f[2816];

  /* Computed Parameter: Weights_Value_b
   * Referenced by: '<S27>/Weights'
   */
  int8_T Weights_Value_b[448];
} ConstP_quantizedNetSim_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T sequenceinput[256];          /* '<Root>/sequenceinput' */
} ExtU_quantizedNetSim_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T out1[3];                    /* '<Root>/out1' */
} ExtY_quantizedNetSim_T;

/* Real-time Model Data Structure */
struct tag_RTM_quantizedNetSim_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_quantizedNetSim_T quantizedNetSim_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_quantizedNetSim_T quantizedNetSim_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_quantizedNetSim_T quantizedNetSim_Y;

/* Constant parameters (default storage) */
extern const ConstP_quantizedNetSim_T quantizedNetSim_ConstP;

/* Model entry point functions */
extern void quantizedNetSim_initialize(void);
extern void quantizedNetSim_step(void);
extern void quantizedNetSim_terminate(void);

/* Real-time Model object */
extern RT_MODEL_quantizedNetSim_T *const quantizedNetSim_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S69>/Data Type Propagation' : Unused code path elimination
 * Block '<S17>/Permute Dimensions' : Eliminated since permutation is trivial
 * Block '<S17>/Reshape' : Reshape block reduction
 * Block '<S40>/Reshape' : Reshape block reduction
 * Block '<S46>/Reshape' : Reshape block reduction
 * Block '<S52>/Reshape' : Reshape block reduction
 * Block '<S58>/Reshape' : Reshape block reduction
 * Block '<S71>/Reshape' : Reshape block reduction
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'quantizedNetSim'
 * '<S1>'   : 'quantizedNetSim/quantizedNetSim'
 * '<S2>'   : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv'
 * '<S3>'   : 'quantizedNetSim/quantizedNetSim/conv1_proj_out'
 * '<S4>'   : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv'
 * '<S5>'   : 'quantizedNetSim/quantizedNetSim/conv2_proj_out'
 * '<S6>'   : 'quantizedNetSim/quantizedNetSim/fc1_proj_in'
 * '<S7>'   : 'quantizedNetSim/quantizedNetSim/fc1_proj_out'
 * '<S8>'   : 'quantizedNetSim/quantizedNetSim/fc2_proj_in'
 * '<S9>'   : 'quantizedNetSim/quantizedNetSim/fc2_proj_out'
 * '<S10>'  : 'quantizedNetSim/quantizedNetSim/globalavgpool1d'
 * '<S11>'  : 'quantizedNetSim/quantizedNetSim/relu1'
 * '<S12>'  : 'quantizedNetSim/quantizedNetSim/relu2'
 * '<S13>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization'
 * '<S14>'  : 'quantizedNetSim/quantizedNetSim/softmax'
 * '<S15>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv/Convolution1DVSS'
 * '<S16>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv/OutputDataType'
 * '<S17>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv/Convolution1DVSS/SingleChannel'
 * '<S18>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv/Convolution1DVSS/SingleChannel/Convolution'
 * '<S19>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_conv/OutputDataType/Convert'
 * '<S20>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_out/Convolution1DVSS'
 * '<S21>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_out/OutputDataType'
 * '<S22>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_out/Convolution1DVSS/MultiChannel'
 * '<S23>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_out/Convolution1DVSS/MultiChannel/Convolution'
 * '<S24>'  : 'quantizedNetSim/quantizedNetSim/conv1_proj_out/OutputDataType/Convert'
 * '<S25>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv/Convolution1DVSS'
 * '<S26>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv/OutputDataType'
 * '<S27>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv/Convolution1DVSS/MultiChannel'
 * '<S28>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv/Convolution1DVSS/MultiChannel/Convolution'
 * '<S29>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_conv/OutputDataType/Convert'
 * '<S30>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_out/Convolution1DVSS'
 * '<S31>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_out/OutputDataType'
 * '<S32>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_out/Convolution1DVSS/MultiChannel'
 * '<S33>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_out/Convolution1DVSS/MultiChannel/Convolution'
 * '<S34>'  : 'quantizedNetSim/quantizedNetSim/conv2_proj_out/OutputDataType/Convert'
 * '<S35>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/BiasAddition'
 * '<S36>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/OutputDataType'
 * '<S37>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/Reshape'
 * '<S38>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/BiasAddition/Add'
 * '<S39>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/OutputDataType/Convert'
 * '<S40>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_in/Reshape/Reshape'
 * '<S41>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/BiasAddition'
 * '<S42>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/OutputDataType'
 * '<S43>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/Reshape'
 * '<S44>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/BiasAddition/Add'
 * '<S45>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/OutputDataType/Convert'
 * '<S46>'  : 'quantizedNetSim/quantizedNetSim/fc1_proj_out/Reshape/Reshape'
 * '<S47>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/BiasAddition'
 * '<S48>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/OutputDataType'
 * '<S49>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/Reshape'
 * '<S50>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/BiasAddition/Add'
 * '<S51>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/OutputDataType/Convert'
 * '<S52>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_in/Reshape/Reshape'
 * '<S53>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/BiasAddition'
 * '<S54>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/OutputDataType'
 * '<S55>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/Reshape'
 * '<S56>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/BiasAddition/Add'
 * '<S57>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/OutputDataType/Convert'
 * '<S58>'  : 'quantizedNetSim/quantizedNetSim/fc2_proj_out/Reshape/Reshape'
 * '<S59>'  : 'quantizedNetSim/quantizedNetSim/globalavgpool1d/GlobalAvgPooling'
 * '<S60>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization/OutputDataType'
 * '<S61>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization/ZerocenterVSS'
 * '<S62>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization/OutputDataType/Convert'
 * '<S63>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization/ZerocenterVSS/Zerocenter_ForEachChannel'
 * '<S64>'  : 'quantizedNetSim/quantizedNetSim/sequenceinput_normalization/ZerocenterVSS/Zerocenter_ForEachChannel/ForEach'
 * '<S65>'  : 'quantizedNetSim/quantizedNetSim/softmax/AlongChannels'
 * '<S66>'  : 'quantizedNetSim/quantizedNetSim/softmax/InputFormat'
 * '<S67>'  : 'quantizedNetSim/quantizedNetSim/softmax/OutputFormat'
 * '<S68>'  : 'quantizedNetSim/quantizedNetSim/softmax/AlongChannels/exp_VSS'
 * '<S69>'  : 'quantizedNetSim/quantizedNetSim/softmax/AlongChannels/exp_VSS/Lookup'
 * '<S70>'  : 'quantizedNetSim/quantizedNetSim/softmax/AlongChannels/exp_VSS/Lookup/exp_lookup'
 * '<S71>'  : 'quantizedNetSim/quantizedNetSim/softmax/InputFormat/C'
 * '<S72>'  : 'quantizedNetSim/quantizedNetSim/softmax/OutputFormat/noop'
 */
#endif                                 /* quantizedNetSim_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
