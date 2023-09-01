#include "main.h"
/**
 * _puts - function used to print a string
 *@str: string
 *Return: returning 0
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
