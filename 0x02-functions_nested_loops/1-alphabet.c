#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case from a to z
*_putchar function used to a print a char
*Return: retuning nothing (void)
*/

void print_alphabet(void)
{
	char a_to_z;

	for (a_to_z = 'a'; a_to_z <= 'z'; ++a_to_z)
	{
		_putchar(a_to_z);
	}
	_putchar('\n');
}
