/*
 * wave.c
 *
 * Created: 20-07-2023 21:03:19
 * Author : M.M.TEJA
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB = 0b11111111;
   DDRD = 0b11111111;
    while (1) 
    {
		OCR0 = 127;
		TCCR0 = 0b01101010;
		OCR1A = 127;
		OCR1B = 127;
		TCCR1A = 0x69;
		TCCR1B = 0x69;
		OCR2 = 127;
		TCCR2 = 0b01101011;
		TIFR = 0;
    }
}

