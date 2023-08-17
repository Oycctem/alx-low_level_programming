#include "main.h"
/**
 *print_square - draws squar
 *_putchar: function used to print a car
 *@size: the number of squares
 */
void print_square(int size)
{
	int i, x;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
