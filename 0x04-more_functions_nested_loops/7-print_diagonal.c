#include "main.h"
/**
 *print_diagonal - draws a diagonal line
 *_putchar: function that prints a char
 *@n: the number of diagonal lines
 *Return: Returns 0
 */
void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
