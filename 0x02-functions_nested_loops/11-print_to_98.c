#include "main.h"

/**
 *print_to_98 - prints to 98
 *@n: the int
 *Return:
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while (n <= 98)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
else
{
	while (n >= 98)
	{
		if (n > 100)
		{
			_putchar('0' + n / 100);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('-');
			_putchar('0' + (-n) / 10);
			_putchar('0' + (-n) % 10);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}
_putchar('\n');
}
