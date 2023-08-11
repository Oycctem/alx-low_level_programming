#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	char Z_to_A;

		for (Z_to_A = 'z'; Z_to_A >= 'a'; --Z_to_A)
		{
			putchar(Z_to_A);
		}
	putchar('\n');

		return (0);
}
