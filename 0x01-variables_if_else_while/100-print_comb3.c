#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (0)
*/
int main(void)
{
	int digit1 = 0;
	int digit2 = 1;

	while (digit1 <= 8)
	{
		while (digit2 <= 9)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}

			digit2++;

		}

		digit1++;
		digit2 = digit1 + 1;
	}
	putchar('\n');
	return (0);
}
