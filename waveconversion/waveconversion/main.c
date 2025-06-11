/*
 * waveconversion.c
 *
 * Created: 22-07-2023 21:34:28
 * Author : M.M.TEJA
 */ 
#define F_CPU 10000000UL
#include <avr/io.h>


int main(void)
{
    DDRB = 0b11111111;
    while (1) 
    {
		OCR0 = 127;
		TCCR0 = 0b01101001;
    }
}

