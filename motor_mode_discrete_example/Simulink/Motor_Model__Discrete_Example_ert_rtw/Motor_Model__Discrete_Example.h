//
// File: Motor_Model__Discrete_Example.h
//
// Code generated for Simulink model 'Motor_Model__Discrete_Example'.
//
// Model version                  : 1.20
// Simulink Coder version         : 9.0 (R2018b) 24-May-2018
// C/C++ source code generated on : Wed Nov 14 16:54:07 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_Motor_Model__Discrete_Example_h_
#define RTW_HEADER_Motor_Model__Discrete_Example_h_
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Motor_Model__Discrete_Example_COMMON_INCLUDES_
# define Motor_Model__Discrete_Example_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // Motor_Model__Discrete_Example_COMMON_INCLUDES_ 

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

// Forward declaration for rtModel
typedef struct tag_RTM RT_MODEL;

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S1>/Discrete-Time Integrator1'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S1>/Discrete-Time Integrator'
} DW;

// Real-time Model Data Structure
struct tag_RTM {
  //
  //  DataMapInfo:
  //  The following substructure contains information regarding
  //  structures generated in the model's C API.

  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[3];
    int32_T* vardimsAddress[3];
    RTWLoggingFcnPtr loggingPtrs[3];
  } DataMapInfo;
};

//
//  Exported Global Signals
//
//  Note: Exported global signals are block signals with an exported global
//  storage class designation.  Code generation will declare the memory for
//  these signals and export their symbols.
//

extern real_T inputVoltage;            // '<Root>/Voltage'
extern real_T outputSpeed;             // '<S1>/Discrete-Time Integrator1'

// Function to get C API Model Mapping Static Info
extern const rtwCAPI_ModelMappingStaticInfo*
  Motor_Model__Discrete_Example_GetCAPIStaticMap(void);

// Class declaration for model Motor_Model__Discrete_Example
namespace Simulink
{
  class MotorModel {
    // public data and function members
   public:
    // model initialize function
    void initialize();

    // model step function
    void step();

    // Constructor
    MotorModel();

    // Destructor
    ~MotorModel();

    // Real-Time Model get method
    RT_MODEL * getRTM();

    // private data and function members
   private:
    // Block signals and states
    DW rtDW;

    // Real-Time Model
    RT_MODEL rtM;
  };
}

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Resistance' : Eliminated nontunable gain of 1


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Motor_Model__Discrete_Example'
//  '<S1>'   : 'Motor_Model__Discrete_Example/DC Motor'

#endif                                 // RTW_HEADER_Motor_Model__Discrete_Example_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
