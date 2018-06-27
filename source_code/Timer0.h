 /******************************************************************************
 *
 * Module: Timer0
 *
 * File Name: Timer0.h
 *
 * Description: Header file for the ATmega16 Timer0 driver
 *
 *******************************************************************************/
#ifndef TIMER0_H_
#define TIMER0_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"
#include "tempSensor.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
#define NUMBER_OF_OVERFLOWS_PER_3_SECONDS 12



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description :
 * Function responsible for initialize the Timer0 driver.
 */
void timer0_init_CTC_mode(uint8 tick);

#endif /* TIMER0_H_ */








