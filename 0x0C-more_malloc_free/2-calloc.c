#include "main.h"
#include <stdlib.h>
/**
 *_calloc - function that alloxates memory for an array
 *@nmemb: int
 *@size: int
 *Return: returns x
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0)
	{
		return ('\0');
	}
	else if (size == 0)
	{
		return ('\0');
	}
	x = calloc(nmemb, size);
	if (x == NULL)
	{
		return ('\0');
	}
	else
	{
		return (x);
	}
}
