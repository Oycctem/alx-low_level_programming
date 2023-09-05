#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - function used to allocate new space in memory and assign a string
 *@str: char
 *Return: returns n
 */
char *_strdup(char *str)
{
	int length, i;
	char *n;

	if (str == NULL)
	{
		return ('\0');
	}
	length = strlen(str) + 1;
	n = malloc(sizeof(char) * length);
	if (!n)
	{
		return ('\0');
	}
	i = 0;
	while (i < length)
	{
		*(n + i) = str[i];
		i++;
	}
	return (n);
}
