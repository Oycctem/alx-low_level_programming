#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	char one_to_nine;

		for (one_to_nine = '1'; one_to_nine <= '9'; ++one_to_nine)
		{
			putchar(one_to_nine);
		}
	putchar('\n');

		return (0);
}
