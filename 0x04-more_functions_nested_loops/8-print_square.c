#include "main.h"
/**
 *print_square - draws squar
 *_putchar: function used to print a car
 *@size: the number of squares
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
	for (i = 0; i < size; i++)
		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
