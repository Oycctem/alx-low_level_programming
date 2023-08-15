#include "main.h"

/**
 *print_to_98 - prints to 98
 *@n: the int
 *Return:
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
	{
		if (n < 10 && n >= 0)
		{
			_putchar(n + '0');
		}
		else if (n >= 10)
		{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
		else if (n < 0)
		{
			_putchar('-');
			n = -n;
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
		}
		_putchar(',');
		_putchar(' ');
	}
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
