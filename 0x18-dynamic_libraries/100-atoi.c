#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string
 * Return: Returns the conversion
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			a = (a * 10) + (*s - '0');
		}
		else if (a > 0)
		{
			break;
		}
	} while (*s++);

	return (a * i);
}
