/******************************************************************************
 *
 * Module: Timer0
 *
 * File Name: Timer0.c
 *
 * Description: Source file for the ATmega16 Timer0 driver
 *
 *******************************************************************************/

#include "Timer0.h"




/*******************************************************************************
 *                     			Global Variables                               *
 *******************************************************************************/

unsigned char g_tick = 0;//global tick variable each one in its value represent 250ms




/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

void timer0_init_CTC_mode(uint8 tick)
{
	/* For clock=1Mhz and prescale F_CPU/1024 every count will take 1ms
	 * so we just need 250 counts to get 250ms every overflow. put initial timer counter=0
	 * and output compare register=250 0 --> 250 (250ms per overflow)
	 * so we need timer to overflow 12 times to get a 3 seconds
	 */

	TCNT0 = 0; //timer initial value
	OCR0  = tick; //compare value
	TIMSK |= (1<<OCIE0);SET_BIT(TIMSK,OCIE0); //enable compare interrupt

	/* Configure timer0 control register
	 * 1. Non PWM mode FOC0=1
	 * 2. CTC Mode WGM01=1 & WGM00=0
	 * 3. No need for OC0 in this example so COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<WGM01) | (1<<CS02) | (1<<CS00);
}

/* Interrupt Service Routine for timer0 compare mode */
ISR(TIMER0_COMP_vect)
{
	g_tick++;
	if(g_tick == NUMBER_OF_OVERFLOWS_PER_3_SECONDS)
	{
		send_temp_to_serial_monitor();
		g_tick=0;
	}
}

