/*
 * odd static.c
 *
 * Created: 20-05-2019 15:43:56
 * Author : Tharun Jagadeesh
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xAA;
	while (1)
	{
		PORTB = 0xFF;
		_delay_ms(100);
	}
}

