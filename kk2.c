#include "include/KK2.h"
#include "include/lcd/KK2LCD.h"
#include <util/delay.h>

#define LED_PIN PB3

int main()
{
	int i;

	st7565Init(Font5x7);
	st7565ClearScreen();
	st7565SetBrightness(12);

	st7565DrawString(1, 5, "Test");

	for(i = 0; i < 100; i++)
	{
		st7565DrawPixel(1+i,14);
	}

	st7565Refresh();

	DDRB &= _BV(LED_PIN); // Set pin 3 of port B to output (LED pin)

	for(;;)
	{
		PORTB ^= _BV(LED_PIN);
		_delay_ms(1000);
	}

	return 0;
}
