#include "main.h"

/**
 *print_to_98 - prints to 98
 *@n: the int
 *Return:
 */
void print_to_98(int n);
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
	_putchar('\n');
}
