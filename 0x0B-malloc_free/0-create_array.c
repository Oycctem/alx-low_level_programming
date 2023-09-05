#include "main.h"
/**
 *create_array - function that creates an array of specified chars
 *@size: unsigned int
 *@c: char
 *Return: returns p
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(a + i) = c;
	}
	return (a);
}
