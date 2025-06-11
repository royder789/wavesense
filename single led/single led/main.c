/*
 * led.c
 *
 * Created: 16-07-2023 20:36:36
 * Author : M.M.TEJA
 */ 
#define F_CPU 10000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
   DDRD = 0b11111111;
    while (1) 
    {
		PORTD = 0b00000100;
    }
}

