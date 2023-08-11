#include <stdio.h>

/**
*main - entry point or the starting point of a c program's execution
*putchar function used to a print a char
*Return: retuning (1)
*/
int main(void)
{
	char numbers;
	char alphabet;

		for (numbers = '0'; numbers <= '9'; ++numbers)
		{
			putchar(numbers);
		}
		for (alphabet = 'a'; alphabet <= 'f'; ++alphabet)
		{
			putchar(alphabet);
		}
	putchar('\n');

		return (0);
}
