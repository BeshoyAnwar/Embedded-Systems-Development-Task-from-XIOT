/******************************************************************************
 *
 * Module: Input_Output Configuration
 *
 * File Name: inputOutput.h
 *
 * Description: Header file for the Input_Output Configuration driver
 *
 *******************************************************************************/

#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize PCO as output.
 */
void output_pin_init(void);

/*
 * Description :
 * Function responsible for initialize the external interrupt INT0 to associate with switch.
 */
void INT0_init(void);

/*
 * Description :
 * Function responsible for send the LED state to serial monitor.
 */
void send_LED_state_to_serial_monitor(void);





#endif /*INPUTOUTPUT_H_*/
