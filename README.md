# Embedded-Systems-Development-Task-from-XIOT
This task is developed based on a request from XIOT as a filteration task for an embedded intership opportunity
# Description
  1-switch as interrupt once it pressed it should lighting the led connected to output pin.
  2-if the switch pressed must send “pressed” to the serial monitor only one time also send the LED states ”ON” or “OFF”
  3-the whole function could be used many times in the program without interfering each-other
  4-Your program can send continuous serial data comes from temperature sensor with 3 second rate at the same time
  ![Project Design](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/blob/master/projectDesign.png)
# Assumptions
  1-using atmega16 as target as we not need high processing
  2-using LM35 as Temp. sensor
Note: NO ISSUES DETECTED
# Downloading Source Code
  $`git clone https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT.git`
# Steps to set up the application
## using Terminal
### Installing Tools
#### Linux:Ubuntu
  $`sudo apt-get install gcc-avr avr-libc avrdude`
#### Mac OSX
  Download [AVR MacPack](https://www.obdev.at/products/crosspack/download.html)
#### Windows
  Download [WinAVR](http://winavr.sourceforge.net/download.html)
### Compiling
  $`make all`
### Generating .HEX
  $`make generateHex`
## using IDE (eclipse)
### Installing Tools
#### Windows
  1-Download [eclipse](https://www.eclipse.org/downloads/download.php?file=/oomph/epp/photon/R/eclipse-inst-win64.exe)
  2-Download [avr plugin](http://avr-eclipse.sourceforge.net/wiki/index.php/Plugin_Download)
### Compiling
  create a new project in eclipse and build it
### Generating .HEX
  you will find .elf file in the subfolder debug under the project folder
### Simulation
  1-Download [proteus professional 8](http://getintopc.com/softwares/electronics/proteus-8-free-download/)
  
  2-Download [project simulation](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/raw/master/projectsimulation.pdsprj)
  
  3-Download [.elf file](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/raw/master/elfProjectFile.elf) created     by eclipse or use the .hex file that have generated
  
  4-Open the downdloaded project using proteus 
  
  5-Double click on the micro and select its program file to your .hex or .elf file you have(The project already attached to its binary you can run without changing it if not needed)
  
  6-Press run and start testing
  ![Project Testing](https://github.com/BeshoyAnwar/Embedded-Systems-Development-Task-from-XIOT/blob/master/projectTesting.png)
### Burning(if you have atmega16)
  $`make burn`
