WaveSense: Microcontroller-Based Waveform Generation and Measurement
Overview
WaveSense is an innovative embedded systems project developed by a dedicated team for Mindbend 2023 and Drishti’s The Grand Roboprix 2023. Built around the ATmega32 microcontroller, this project generates precise waveforms (e.g., square waves at 31.25 kHz) and measures input signal frequencies, displaying results on a 16x2 LCD via I2C communication. By leveraging PWM (Pulse Width Modulation), timers, and a PCF8574T port expander, WaveSense combines hardware and software to deliver customizable signal generation and real-time frequency analysis.
Team

Mentors: Abida Polara, Divya Thakkar, Prachi Gupta, Pranshi Lavti
Members: Aditya Chandel, Amisha Soni, Chaitanya Singh, Harshal Atre, Mann Maruthi Teja, Mihir Kumar Roy, Ravita Vagaly, Ridhayu Gosai, Rishika Agarwal, Samhita Patil, Shreya Singhal, Uday Khunti

Features

Waveform Generation: Generates square waves with configurable duty cycles (e.g., 50%, 75%) using Timer0, Timer1, and Timer2 in Fast PWM and CTC modes.
Frequency Measurement: Utilizes Timer1’s Input Capture mode to measure the period of input signals and calculate frequency.
LCD Interfacing: Displays frequency data on a 16x2 JHD162A LCD using 4-bit mode with a PCF8574T port expander over I2C.
Signal Amplification: Implements RC circuits for amplifying sine and triangular waves.
Embedded C Programming: Leverages bitwise operations, I/O port configuration, and I2C protocols for precise control.

Technical Details

Microcontroller: ATmega32 (8-bit AVR, 32 KB flash, 3 timers, I2C/SPI/USART support)
PWM Configuration:
Timer0, Timer1, Timer2 configured in Fast PWM or CTC modes (e.g., TCCR0 = 0b01101001 for Timer0 with no prescaling, Fast PWM).
Duty cycle set via Output Compare Registers (e.g., OCR0 = 127 for 50% duty cycle).


I2C Communication:
Interfaces with PCF8574T port expander (0x40 address) for LCD control.
Uses TWBR, TWCR, TWSR, and TWDR registers for I2C initialization, start/stop conditions, and data transfer.


LCD Interfacing:
Operates in 4-bit mode to reduce pin usage, with commands sent via I2C to the port expander.
Displays real-time frequency measurements.


Tools Used:
Atmel Studio: For writing and debugging embedded C code.
Proteus: For circuit simulation and testing.
eXtreme Burner: For uploading code to the ATmega32 via USBASP.


Components:
ATmega32, JHD162A LCD, PCF8574T port expander, USBASP programmer, buck converter, resistors, capacitors, breadboard, jumper wires, oscilloscope, multimeter.



Code Overview
The repository includes several C files for different functionalities:

main1.c: Implements I2C communication for interfacing with the PCF8574T port expander, used for LCD control.
main2.c: Configures Timer0 for PWM generation, producing a 50% duty cycle square wave.
main3.c: Basic LED control on Port D, demonstrating I/O port configuration.
main.c: Generates waveforms using all three timers (Timer0, Timer1, Timer2) with PWM settings for simultaneous waveform output.
m4ain.c: Focuses on Timer0 PWM generation for waveform output at 10 MHz clock frequency.

Challenges and Solutions

I2C Addressing: Incorrect port expander addresses caused LCD display issues, resolved by verifying the PCF8574T address (0x40).
Signal Distortion: Distorted waveforms due to improper RC values in amplification circuits were fixed by calculating appropriate R and C values for desired bandwidth.
USBASP Errors: Power-on failures due to incorrect MOSI-MISO connections were resolved by installing USBASP drivers via Zadig.
Infinite Loop in Switch Logic: Fixed by correcting iteration logic in LED blinking tasks.

Applications

Generating square waves for clock signals in digital systems.
Measuring and analyzing signal frequencies for waveform characterization.
Amplifying sine and triangular waves for enhanced signal processing.



Getting Started

Clone the repository: git clone https://github.com/royder789/Autonomous-Line-follower
Open the C files in Atmel Studio for compilation and debugging.
Use Proteus to simulate the circuit with the provided schematics.
Upload the code to an ATmega32 using eXtreme Burner and a USBASP programmer.
Connect the hardware components as per the schematics in WaveSense.pdf.

Future Improvements

Implement real-time waveform switching using push buttons.
Enhance frequency measurement accuracy with advanced filtering.
Integrate additional sensors for multi-signal analysis.

Acknowledgments
A huge thanks to our mentors and team for their guidance and collaboration in bringing WaveSense to life. Special recognition to Mindbend 2023 and Drishti’s The Grand Roboprix 2023 for providing a platform to showcase our work!
References

ATmega32 Datasheet
AVR Microcontroller Tutorials
I2C Bus Documentation
Embedded C Programming Guides

