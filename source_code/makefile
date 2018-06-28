all:
  avr-gcc -c -mmcu=atmega16 ADC.c -o ADC.o
  avr-gcc -c -mmcu=atmega16 UART.c -o UART.o
  avr-gcc -c -mmcu=atmega16 Timer0.c -o Timer0.o
  avr-gcc -c -mmcu=atmega16 inputOutput.c -o inputOutput.o
  avr-gcc -c -mmcu=atmega16 tempSensor.c -o tempSensor.o
  avr-gcc -c -mmcu=atmega16 main.c -o main.o
  avr-gcc -mmcu=atmega16 ADC.o UART.o Timer0.o inputOutput.o tempSensor.o main.o -o proj.elf
generateHex:
  avr-objcopy -O ihex -j .text -j .data proj.elf proj.hex
burn:
  (sudo) avrdude -p atmega16 -c usbasp -U flash:w:main.hex:i -F -P usb
  
