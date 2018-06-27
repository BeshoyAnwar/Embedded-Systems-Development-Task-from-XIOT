 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the ATmega16 UART driver
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* UART Driver Baud Rate */
#define USART_BAUDRATE 9600
/* UART Driver Baud PreScale */
#define BAUD_PRESCALE (((F_CPU / (USART_BAUDRATE * 8UL))) - 1)

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Function responsible for initialize the UART driver.
 */
void UART_init(void);

/*
 * Description :
 * Function responsible for send byte using UART driver.
 */
void UART_sendByte(const uint8 data);

/*
 * Description :
 * Function responsible for send string using UART driver.
 */
void UART_sendString(const uint8 *Str);

#endif /* UART_H_ */
