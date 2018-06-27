# Embedded-Systems-Development-Task-from-XIOT
This task is developed based on a request from XIOT as a filteration task for an embedded intership opportunity

# Downloading Source Code
  $`git clone https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT.git`
# Installing Tools
## Linux:Ubuntu

  $ 'sudo apt-get install gcc-avr avr-libc avrdude'
  
## Mac OSX

  Download [AVR MacPack](https://www.obdev.at/products/crosspack/download.html)
  
## Windows

  Download [WinAVR](http://winavr.sourceforge.net/download.html)
 
# Compiling
  $`avr-gcc -c -mmcu=atmega16 ADC.c -o ADC.o`
  
  $`avr-gcc -c -mmcu=atmega16 UART.c -o UART.o`
  
  $`avr-gcc -c -mmcu=atmega16 Timer0.c -o Timer0.o`
  
  $`avr-gcc -c -mmcu=atmega16 inputOutput.c -o inputOutput.o`
  
  $`avr-gcc -c -mmcu=atmega16 tempSensor.c -o tempSensor.o`
  
  $`avr-gcc -c -mmcu=atmega16 main.c -o main.o`
  
  $`avr-gcc -mmcu=atmega16 ADC.o UART.o Timer0.o inputOutput.o tempSensor.o main.o -o proj.elf`
  
 
# Generating .HEX
  $`avr-objcopy -O ihex -j .text -j .data proj.elf proj.hex`
# Simulation
  Download [proteus professional 8](http://getintopc.com/softwares/electronics/proteus-8-free-download/)
  
  Download [project simulation](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/raw/master/projectsimulation.pdsprj)
  
  Download [.elf file](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/raw/master/elfProjectFile.elf) created     by eclipse or use the .hex file that have generated
  
  Open the downdloaded project using proteus 
  
  Double click on the micro and select its program file to your .hex or .elf file you have
  Press run and start testing
# Burning
  $`(sudo) avrdude -p atmega16 -c usbasp -U flash:w:main.hex:i -F -P usb`
