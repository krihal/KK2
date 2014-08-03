#include <stdio.h>
#include <stdlib.h>
#include <KK2.h>
#include <lcd/KK2LCD.h>
#include <wiring/wiring.h>

#if KKVER == KK21
#include <MPU6050/MPU6050.h>
#endif

#define LED_PIN PB3

int main()
{
	int i, last_led_update = 0;

	initWiring();

	st7565Init(Font5x7);
	st7565ClearScreen();
	st7565SetBrightness(12);

	st7565DrawString(1, 5, "Test");

	for(i = 0; i < 100; i++)
	{
		st7565DrawPixel(1+i,14);
	}

	st7565Refresh();

	Fastwire::setup(100, true);

#if KKVER == KK21
	MPU6050 mpu;
	mpu.initialize();
#endif

	DDRB &= _BV(LED_PIN); // Set pin 3 of port B to output (LED pin)

	for(;;)
	{
		char buff[512];
		if(millis() - last_led_update > 1000)
		{
			PORTB ^= _BV(LED_PIN);
			last_led_update = millis();
		}

		st7565ClearScreen();

#if KKVER == KK21
		if(mpu.testConnection())
		{
			st7565DrawString(1,20, "Connected");
		}
		else
		{
			st7565DrawString(1,20, "Not connected");
		}
#endif

		sprintf(buff, "acc_x = %d\n", mpu.getAccelerationX());
		st7565DrawString(1,30, buff);
		st7565Refresh();

		delay(50);
	}

	return 0;
}
