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
		for (n = n; n < 98; n++)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
			_putchar(',');
			_putchar(' ');
	}
else
{
	for (n = n; n > 98; n--)
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
			_putchar((-n) / 10 + '0');
			_putchar((-n) % 10 + '0');
		}
			_putchar(',');
			_putchar(' ');
		}
	_putchar('0' + 9);
	_putchar('0' + 8);
	}
_putchar('\n');
}
