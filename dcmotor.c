/*
 * DC MOTOR.c
 *
 * Created: 15-05-2019 14:16:08
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    /* Replace with your application code */
	DDRB=0XFF;
    while (1) 
    {
		PORTB=1<<PB1;
		_delay_ms(1000);
		PORTB=~(1<<PB1);
		_delay_ms(1000);
		PORTB=(1<<PB2);
		_delay_ms(1000);
		PORTB=~(1<<PB2);
		_delay_ms(1000);
    }
}

