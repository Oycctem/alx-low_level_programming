#include "main.h"
/**
 *puts_half - prints the second half of a string
 *@str: string
 *Return: returning 0
 */
void puts_half(char *str);
{
	int len = 0;
	int begi = len / 2;
	int i;

	for (i = begi; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
