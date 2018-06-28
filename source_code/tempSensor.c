 /******************************************************************************
 *
 * Module: Temperature Sensor
 *
 * File Name: TempSensor.c
 *
 * Description: Source file for the Temperature Sensor driver
 *
 *******************************************************************************/

#include "tempSensor.h"


/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

void send_temp_to_serial_monitor(void)
{
	uint32 temp;
	uint8 buffer[20];
	UART_sendString("Temp = ");
	temp = ADC_readChannel(2); /* read channel two where the temp sensor is connect */
	temp = (temp*150*5)/(1023*1.5); /* calculate the temp from the ADC value*/
	itoa(temp,buffer,10);	  /* convert the temp reading from uint32 type to string type */
	UART_sendString(buffer); /* display the temp on Serial Monitor */
	UART_sendString("C\n\r");
}
