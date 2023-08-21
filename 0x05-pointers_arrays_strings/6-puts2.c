#include "main.h"
/**
 *puts2 - prints every other letter
 *@str: string
 *Return: returning 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
		{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
