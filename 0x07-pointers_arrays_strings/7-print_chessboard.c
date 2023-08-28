#include "main.h"
/**
 *print_chessboard - function that prints the chessboard
 *@a: chessboard
 *Return : retuns void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, x;

	while (a[i] && i < 8)
	{
		x = 0;
		while (a[i][x] && x < 8)
		{
			_putchar(a[i][x]);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
