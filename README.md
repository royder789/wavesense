WaveSense: Microcontroller-based Waveform Generation and Frequency Measurement
WaveSense is an atypical project designed to generate specific waveforms using the ATmega32 microcontroller. The waveforms are produced at frequencies predetermined by the user, while the system measures the frequency of input signals. The project combines hardware design and embedded C programming to provide flexible signal generation and analysis. It can be applied in areas such as clock generation, signal amplification, and frequency measurement, making it valuable in electronics and communications.

Key Features:
Waveform Generation: Generate square, sine, and triangular waveforms using onboard timers and Pulse Width Modulation (PWM) of the ATmega32 microcontroller.
Frequency Measurement: Perform precise frequency measurement of incoming signals using input capture functionality.
LCD Display: Display the waveform frequency on a 16x2 alphanumeric LCD, interfacing with the microcontroller via the I2C protocol.
Signal Amplification: Amplify sine and triangular waves during the signal amplification stage.
Software Simulation & Hardware Integration:
Proteus Simulation: Circuit designs are simulated using Proteus software before proceeding to code writing and debugging.
Atmel Studio: Code is written and debugged in Atmel Studio and then deployed to hardware.
Tools and Software:
Atmel Studio: IDE for writing, compiling, and debugging embedded C code.
Proteus: Electronic design automation tool for simulating the microcontroller circuit.
eXtreme Burner: Used for uploading code to the microcontroller via a USBASP programmer.
Components:
ATmega32 Microcontroller
16x2 LCD Display
USBASP Programmer
PCF8574T Port Expander (I2C)
Buck Converter
Applications:
Digital clock generators
Signal prediction and measurement systems
Waveform amplification for communication systems
