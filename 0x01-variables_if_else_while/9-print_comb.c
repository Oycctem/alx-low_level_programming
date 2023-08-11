#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	int zero_to_nine;

		for (zero_to_nine = '0'; zero_to_nine <= '9'; ++zero_to_nine)
		{
			putchar(zero_to_nine);
			if (zero_to_nine != '0')
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');

		return (0);
}
