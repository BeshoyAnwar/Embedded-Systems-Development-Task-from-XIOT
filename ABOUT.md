# Goals
  -The switch is interrupted once it's pressed ,make the LED toggle then the LED state is sended to serial monitor over UART protocol
  
  -At the same time the data comes from Temperature sensor is sending to serial monitor with 3 seconds rate
# Thoughts about this task
  -The Temperature sensor (LM35) is analog sensor then we need ADC module to interface with it
 
  -We needed to display our data on Serial monitor then we need UART driver
  
  -No polling in the super loop then the micro will not be busy with no need for that
# learned lessons from the task
  -Good design of the drivers files
  
  -How to make the code more readable with alot of comments and choose suitable names for variables,functions,..etc
  
  -The Design a README file
  
# Experience in Embedded systems
  -I have taken an embedded diploma during it:
  
                                              *writing many drivers as I_OPorts,Timers,Interrupts,LCD ,KeyPad,ADC
                                              
                                              *writing communication protocols as UART,I2C,SPI
                                              
                                              *working on atmega16 and RTOS
                                              
                                              *working on eclipse,atmelstdio,kiel,proteus
                                              
  -Developing Projects:
  
                      1-Digital clock with atmega16
                      
                      2-Door locker system with atmega16
                      
                      3-Distance measuring device with Tiva C
# Experience in Computer engineering
-languages: 
          C,C++,verilog,python,java

-projects: 

          1-Pipelined MIPS processor using Verilog with assembler using python
          
          2-Students and Courses management system using C
          
          3-Matrix library similar to Matlab using C++/OOP
          
          4-Social network analysis using python with Kivy framework
          
          5-Operating system process scheduler using C#
          
          6-Operating system memory allocator using C#
