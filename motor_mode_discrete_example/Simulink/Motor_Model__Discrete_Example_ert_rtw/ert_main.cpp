//
// File: ert_main.cpp
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
#include <stddef.h>
#include <stdio.h>                     // This ert_main.c example uses printf/fflush 
#include <math.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "Motor_Model__Discrete_Example.h" // Model's header file
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "Motor_Model__Discrete_Example.cpp"
#include "Motor_Model__Discrete_Example_capi.cpp"

#include "server.h"
using namespace Simulink;
static Simulink::MotorModel rtObj;     // Instance of model class

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
double rt_OneStep(void);
double rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;
  struct timespec time;
  double timeSec;
  double outputSpeedStorage;
  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    return 0.0;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here
//  clock_gettime(CLOCK_REALTIME,&time);
//  timeSec = time.tv_sec + time.tv_nsec * 0.000000001;
  
 // inputVoltage = 10.0*sin(timeSec*6.283185307179586476925286766559*0.5); // 0.5 Hz input signal
  printf("Input Voltage: %f\n", inputVoltage);
  // Step the model
  rtObj.step();
  outputSpeedStorage = outputSpeed; // Store value before indicating task complete
  printf("Output Speed: %f\n", outputSpeed);
  // Get model outputs here
 // printf("Output Speed: %f\n", outputSpeed);
  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
  return outputSpeedStorage;
}

//
// The example "main" function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific.  This example
// illustrates how you do this relative to initializing the model.
//
int_T main(int_T argc, const char *argv[])
{
  struct timespec sleep_time;
  double outputSpeedPrint;
  sleep_time = Sec2TimeSpec(0.0005); // 2 kHz loop
  // Unused arguments
 // (void)(argc);
  //(void)(argv);

  // Initialize model
  rtObj.initialize();

  // Attach rt_OneStep to a timer or interrupt service routine with
  //  period 0.0005 seconds (the model's base sample time) here.  The
  //  call syntax for rt_OneStep is
  
  //   rt_OneStep();

//  printf("Warning: The simulation will run forever. "
  //       "Generated ERT main won't simulate model step behavior. "
    //     "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));

  // ======================================================
  // Server code begins here
    int socket_fd, new_socket_fd, port_num, n, s, execute = 0;
    socklen_t client_address_length;
    char buffer[buffer_size]="", echoBuffer[buffer_size]="";
    struct sockaddr_in server_address, client_address;
    struct addrinfo hints;
    struct addrinfo *result, *rp;

    
    // Parse command line arguments
    if (argc < 2)
    {
         fprintf(stderr, "ERROR, no port provided\nPort must be first argument"); // May want this to be a log file entry instead
         exit(1);
    }
    port_num = atoi(argv[1]);


    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_INET;    /* Allow IPv4 or IPv6 */
    hints.ai_socktype = SOCK_STREAM; /* Datagram socket */
    hints.ai_flags = AI_PASSIVE;    /* For wildcard IP address */
    hints.ai_protocol = IPPROTO_TCP;          /* Any protocol */
    hints.ai_canonname = NULL;
    hints.ai_addr = NULL;
    hints.ai_next = NULL;
    s = getaddrinfo(NULL, argv[1], &hints, &result);
    if (s != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(s));
        exit(EXIT_FAILURE);
    }
    /* getaddrinfo() returns a list of address structures.
        Try each address until we successfully bind(2).
        If socket(2) (or bind(2)) fails, we (close the socket
        and) try the next address. */

    #ifdef DEBUG
        printf("Creating the socket...\n");
    #endif // DEBUG

    for (rp = result; rp != NULL; rp = rp->ai_next) 
    {
        socket_fd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
        if (socket_fd == -1)
            continue;

        if (bind(socket_fd, rp->ai_addr, rp->ai_addrlen) == 0)
        {
            execute = 1;
            break;                  /* Success */
        }

     //   close(socket_fd);
    }

    if (rp == NULL) {               /* No address succeeded */
        fprintf(stderr, "Could not bind\n");
        exit(EXIT_FAILURE);
    }

    freeaddrinfo(result);           /* No longer needed */

    // Mark the socket as passive connection 
    #ifdef DEBUG
        printf("Marking the socket as passive connection \n");
    #endif // DEBUG
    listen(socket_fd,5);
    client_address_length = sizeof(client_address);


    #ifdef DEBUG
        printf("Accepting the client connection\n");
    #endif // DEBUG
    // Accept the client connection
    new_socket_fd = accept(socket_fd, (struct sockaddr *) &client_address, &client_address_length);
    if (new_socket_fd < 0)
        error("ERROR on accept");

    // Zero out the buffer
    bzero(buffer,buffer_size);

    #ifdef DEBUG
        printf("Sending exit instructions\n");
    #endif // DEBUG

    // Send exit instructions
    n = sendMessage(new_socket_fd, "SERVER: Connected!\nSend EXIT to disconnect\n");

    #ifdef DEBUG
        printf("Reading client's message\n");
    #endif // DEBUG

  while (1) {

    bzero(buffer,buffer_size); // read demand from TCS
    bzero(echoBuffer,buffer_size);
    // Read the client's message
    n = read(new_socket_fd, buffer, buffer_size-1); // Use receive() instead?
    if (n < 0)
        error("ERROR reading from socket");

    #ifdef DEBUG
        printf("Replying\n");
    #endif // DEBUG

    //  Perform other application tasks here
    inputVoltage = atof(buffer);
    
    outputSpeedPrint = rt_OneStep();
    sprintf(echoBuffer, "%f", outputSpeedPrint);
    //sprintf(echoBuffer,"Output Speed: %f\n", outputSpeedPrint); // Send result back to TCS
    n = sendMessage(new_socket_fd, echoBuffer); // TODO: Looks like this isn't getting sent
    nanosleep(NULL, &sleep_time);
    
  }

  // The option 'Remove error status field in real-time model data structure'
  //  is selected, therefore the following code does not need to execute.

#if 0

  // Disable rt_OneStep() here
#endif

  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
