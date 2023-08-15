#include "main.h"

/**
*main - entry point or the starting point of a c program's execution
*_putchar function used to a print a char
*Return: retuning (0)
*/

int main(void)
{
	char a_to_z;

	for (a_to_z = 'a'; a_to_z <= 'z'; ++a_to_z)
	{
		_putchar(a_to_z);
	}
	_putchar('\n')

		return (0);
}
