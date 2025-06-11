/*
 * PWM_Generation.c
 *
 * Created: 03-08-2023 23:52:16
 * Author : M.M.TEJA
 */ 

#include <avr/io.h>
#define  F_CPU 1600000UL
#include <util/delay.h>'


int main(void)
{
    DDRB=0b00001000;
    while (1) 
    {
		OCR0=127;
		TCCR0=01101001;
    }
}

