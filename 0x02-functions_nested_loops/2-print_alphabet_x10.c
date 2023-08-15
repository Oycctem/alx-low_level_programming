#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case from a to z
*_putchar function used to a print a char
*Return: retuning nothing (void)
*/

void print_alphabet_x10(void)
{
	char a_to_z;
	int loop = 9;
	int i = 0;

	while (i < loop)
	{
	for (a_to_z = 'a'; a_to_z <= 'z'; ++a_to_z)
	{
		_putchar(a_to_z);
	}
	_putchar('\n');

	i++
	}
}
