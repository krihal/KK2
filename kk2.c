#include "include/KK2.h"
#include "include/lcd/KK2LCD.h"

int main()
{
	st7565Init(Font5x7);
	st7565SetBrightness(12);
	st7565DrawString_P(1, 5, "Test");

	return 0;
}
