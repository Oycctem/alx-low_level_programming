#include "main.h"
/**
 *puts2 - prints every other letter
 *@str: string
 *Return: returning 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
	}
		i++;
	}
	_putchar('\n');
}
