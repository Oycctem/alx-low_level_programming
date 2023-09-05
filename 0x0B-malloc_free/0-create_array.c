#include "main.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of specified chars
 *@size: unsigned int
 *@c: char
 *Return: returns p
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(sizeof(char) * size);
	if (!a)
	{
		return ('\0');
	}
	i = 0;
	while (i < size)
	{
		*(a + i) = c;
		i++;
	}
	return (a);
}
