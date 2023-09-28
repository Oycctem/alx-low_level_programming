#include "main.h"
/**
 *set_bit - function that sets the value of a bit to 1
 *@n: int
 *@index: int
 *Return: returns 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) - 1))
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
