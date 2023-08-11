#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	char lowercase;
	char uppercase;

		for (lowercase = 'a'; lowercase <= 'z'; ++lowercase)
		{
			putchar(lowercase);
		}
		for (uppercase = 'A'; uppercase <= 'Z'; ++uppercase)
		{
			putchar(uppercase);
		}
	putchar('\n');

		return (0);
}
