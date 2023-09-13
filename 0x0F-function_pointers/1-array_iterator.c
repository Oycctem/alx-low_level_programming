#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - function that executes a function
 *@array: int
 *@size: size
 *@action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
