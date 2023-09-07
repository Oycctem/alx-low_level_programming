#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integer
 *@min: int
 *@max: int
 *Return: retuns x
 */
int *array_range(int min, int max)
{
	int *x;
	int i, a = 0;

	if (max < min)
	{
		return ('\0');
	}
	i = (max - min) + 1;
	x = malloc(i * sizeof(int));
	if (x == NULL)
	{
		return ('\0');
	}
	while (a < i)
	{
		*(x + a) = min + a;
		a++;
	}
	return (x);
}
