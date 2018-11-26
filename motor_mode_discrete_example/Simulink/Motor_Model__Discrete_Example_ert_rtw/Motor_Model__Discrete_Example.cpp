//
// File: Motor_Model__Discrete_Example.cpp
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
#include "Motor_Model__Discrete_Example_capi.h"
#include "Motor_Model__Discrete_Example.h"

// user code (top of source file)
//Calls socket set-up function
// Runs infinite main loop, which:
// Marshalls input socket data and copies them to corresponding input variables in the generated code.
// Polls real-time clock, and after task period:
// Calls �m_step(�)�
// Marshalls generated code output variables into output sockets.
// Infinite loop in �main� runs indefinitely until input to signal handler triggers shutdown.
using namespace Simulink;

// Exported block signals
real_T inputVoltage;                   // '<Root>/Voltage'
real_T outputSpeed;                    // '<S1>/Discrete-Time Integrator1'
namespace Simulink
{
  // Model step function
  void MotorModel::step()
  {
    // DiscreteIntegrator: '<S1>/Discrete-Time Integrator1'
    outputSpeed = rtDW.DiscreteTimeIntegrator1_DSTATE;

    // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator1' incorporates:
    //   DiscreteIntegrator: '<S1>/Discrete-Time Integrator'
    //   Gain: '<S1>/Damping'
    //   Gain: '<S1>/Inertia'
    //   Gain: '<S1>/Kt'
    //   Sum: '<S1>/Add1'

    rtDW.DiscreteTimeIntegrator1_DSTATE += (0.01 *
      rtDW.DiscreteTimeIntegrator_DSTATE - 0.1 * outputSpeed) * 100.0 * 0.0005;

    // Update for DiscreteIntegrator: '<S1>/Discrete-Time Integrator' incorporates:
    //   Gain: '<S1>/Inductance'
    //   Gain: '<S1>/Ke'
    //   Inport: '<Root>/Voltage'
    //   Sum: '<S1>/Add'

    rtDW.DiscreteTimeIntegrator_DSTATE += ((inputVoltage -
      rtDW.DiscreteTimeIntegrator_DSTATE) - 0.01 * outputSpeed) * 2.0 * 0.0005;
  }

  // Model initialize function
  void MotorModel::initialize()
  {
    // Registration code

    // Initialize DataMapInfo substructure containing ModelMap for C API
    Motor_Model__Discrete_Example_InitializeDataMapInfo((&rtM), &rtDW);

    // user code (Initialize function Body)

    // Parse command line arguments
    // Create and connect sockets for real-tiome clock, model inputs, model outputs
    // Set up operating system handling
    // Call m_initialize
  }

  // Constructor
  MotorModel::MotorModel()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  MotorModel::~MotorModel()
  {
    // Currently there is no destructor body generated.
  }

  // Real-Time Model get method
  RT_MODEL * MotorModel::getRTM()
  {
    return (&rtM);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
