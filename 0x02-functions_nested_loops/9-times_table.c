#include "main.h"
/**
 * times_table - generates and prints the multiplication table.
 */
void times_table(void)
{
	int up = 10;
	int down = 10;
	int u = 0;

	while (u < up)
	{
		int d = 0;

		while (d < down)
		{
			int table = u * d;

			if (table < 10)
			{
				_putchar(' ');
				_putchar('0' + table);
			}
			else
			{
				_putchar('0' + table / 10);
				_putchar('0' + table % 10);
			}
			if (d < down - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			d++;
		}
		_putchar('\n');

		u++;
	}
}
