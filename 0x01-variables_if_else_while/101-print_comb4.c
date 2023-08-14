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
	int digit3 = 2;

	while (digit1 <= 7)
	{
		while (digit2 <= 8)
		{
			while (third <= 9)
			{
			putchar('0' + digit1);
			putchar('0' + digit2);
			putchar('0' + digit3);

			if (digit1 != 7 || digit2 != 8 || digit3 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			digit3++;
			}
			digit2++;
			digit3 = digit2 + 1;
		}
		digit1++;
		digit2 = digit1 + 1;
		digit3 = digit2 + 1;
	}
	putchar('\n');
	return (0);
}
