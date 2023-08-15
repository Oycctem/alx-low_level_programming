#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 * _putchar function used to print a char
 * Return: returning nothing(void)
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');

			min++;
		}

	hour++;
	}
}
