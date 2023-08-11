#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	char A_to_Z;

		for (A_to_Z = 'a'; A_to_Z <= 'z'; ++A_to_Z)
		{
			putchar(A_to_Z);
		}
	putchar('\n');

		return (0);
}
