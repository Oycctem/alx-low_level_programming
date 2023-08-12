#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (0)
*/

int main(void)
{
	for (int first = 0; first <= 8; ++first_digit)
	{
		for (int second = first + 1; second <= 9; ++second)
		{
			putchar('0' + first);
			putchar('0' + second);

			if (first != 8 || second != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

