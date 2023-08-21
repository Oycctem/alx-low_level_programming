#include "main.h"
/**
 *print_rev - prints in reverse
 *@s: string
 *Return: returning 0
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n--)
{
	_putchar(s[n]);
}
_putchar('\n');
}
