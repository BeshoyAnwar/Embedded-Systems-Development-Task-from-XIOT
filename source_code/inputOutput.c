/******************************************************************************
 *
 * Module: Input_Output Configuration
 *
 * File Name: inputOutput.c
 *
 * Description: Source file for the Input_Output Configuration driver
 *
 *******************************************************************************/


#include "inputOutput.h"


/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

void output_pin_init(void)
{
	SET_BIT(DDRC,PC0); // Configure pin PC0 in PORTC as output pin
	SET_BIT(PORTC,PC0);// Initialization Led is off at the beginning(Negative Logic)
}


void INT0_init(void)
{
	CLEAR_BIT(SREG,7);                 // Disable interrupts by clearing I-bit
	CLEAR_BIT(DDRD,PD2);			  // Configure INT0/PD2 as input pin
	SET_BIT(GICR,INT0);				 // Enable external interrupt pin INT0
	SET_BIT(MCUCR,ISC00);			// Trigger INT0 with the raising edge
	SET_BIT(MCUCR,ISC01);
	SET_BIT(SREG,7);			  // Enable interrupts by setting I-bit

}


void send_LED_state_to_serial_monitor(void)
{
	UART_sendString("Pressed ");

	if(BIT_IS_CLEAR(PORTC,0)){

		UART_sendString("LED_ON ");

	}
	else{

		UART_sendString("LED_OFF ");
	}
}

/* External INT0 Interrupt Service Routine */
ISR(INT0_vect)
{   /* each press on the switch toggle the LED state
 	 *from on to off and veca versa
 	 */
	TOGGLE_BIT(PORTC,PC0); //toggle led state
	send_LED_state_to_serial_monitor();
}


