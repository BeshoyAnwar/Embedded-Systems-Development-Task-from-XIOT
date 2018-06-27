 /******************************************************************************
 *
 * Module: Temperature Sensor
 *
 * File Name: TempSensor.h
 *
 * Description: Header file for the Temperature Sensor driver
 *
 *******************************************************************************/
#ifndef TEMPSENSOR_H_
#define TEMPSESOR_H_

#include "ADC.h"
#include "UART.h"
#include <stdlib.h>


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for send Temperature sensor serial data to serial monitor
 */
void send_temp_to_serial_monitor(void);




#endif /*TEMPSENSOR_H_*/
