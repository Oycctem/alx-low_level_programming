#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - function that allocates memory
 *@b: int
 *Return: Retruns n
 */
void *malloc_checked(unsigned int b)
{
	int *n;

	*n = malloc(b);
	if (n == '\0')
	{
		exit(98);
	}
	return (n);
}
