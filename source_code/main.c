#include "ADC.h"
#include "Timer0.h"
#include "inputOutput.h"
#include "UART.h"


int main(void)
{
    INT0_init();                     // Enable external INT0
    output_pin_init();	            // init PC0 as output pin
    timer0_init_CTC_mode(250);     // start the timer
    UART_init();                  // initialize UART driver
    ADC_init(); 	         // initialize ADC driver
    while(1)
    {

    }
}
