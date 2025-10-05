/*
 * Blink.c
 *
 * Created: 04.10.2025 23:43:40
 * Author : piszc
 */ 

#define F_CPU 1000000UL 
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	// Ustaw PB0 jako wyjœcie
	DDRB |= (1 << PB0);

	while (1)
	{
		// Zmieñ stan diody
		PORTB ^= (1 << PB0);
		_delay_ms(1000); // pó³ sekundy
	}
}


