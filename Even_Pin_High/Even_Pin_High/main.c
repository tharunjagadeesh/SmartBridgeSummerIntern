/*
 * Even_Pin_High.c
 *
 * Created: 22-05-2019 11:43:06
 * Author : Tharun Jagadeesh
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0x55;
	while (1)
	{
		PORTB = 0xFF;
		_delay_ms(100);
	}
}
