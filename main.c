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
	// podstawienie wartości 1 na 3 bit rejestru DDRB
	// DDRB - Data Direction Register B
	// 0 -> wejście
	// 1 -> wyjście 
	DDRB |= (1 << PB0);

	while (1)
	{
		// podstawienie wartości 0 na 3 bit rejestru PORTB
		PORTB &= ~(1 << PB0);
		
		_delay_ms(1000); // nie rób nic przez sekunde
		
		
		// podstawienie wartości 1 na 3 bit rejestru PORTB
		PORTB |= (1 << PB0);
		
		_delay_ms(1000);
	}
	return 0;
}


//komenda do AVRDUDE 
// avrdude -c usbasp -p m328p -U flash:w:program.hex:i

