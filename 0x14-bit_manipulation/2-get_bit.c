#include "main.h"
/**
 *get_bit - function that returns the value of a bit
 *at a given index
 *@n: int
 *@index: int
 *Return: returns the value of the bit at index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index >= ((sizeof(unsigned long int) * 8) - 1))
	{
		return (-1);
	}
	if ((n & i) != 0)
	{
		return (1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
