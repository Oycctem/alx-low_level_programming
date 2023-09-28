#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to a uint
 *@b: pointer to a string
 *Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = (i << 1) + (*b - '0');
		b++;
	}
	return (i);
}
