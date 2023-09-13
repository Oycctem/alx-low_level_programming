#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - function that searches for an integer
 *@array: int
 *@size: int
 *@cmp: function
 *Return: returns -1 if the size is less than 0 or NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
