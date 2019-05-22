/*
 * DC_Motor.c
 *
 * Created: 22-05-2019 11:47:43
 * Author : Tharun Jagadeesh
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	while (1)
	{
		
		PORTB = 0x01;
		_delay_ms(500);
		PORTB = 0x02;
		_delay_ms(500);
	}
}