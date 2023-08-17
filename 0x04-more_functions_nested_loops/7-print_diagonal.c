#include "main.h"
/**
 *print_diagonal - draws a diagonal line
 *_putchar: function that prints a char
 *@n: the number of diagonal lines
 *Return: Returns 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
