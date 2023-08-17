#include "main.h"
/**
 *print_line - draws straight line
 *_putchar: function used to print a car
 *@n: the number of lines
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
