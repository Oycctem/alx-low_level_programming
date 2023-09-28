#include "main.h"
/**
 *flip_bits - function that returns the number of bits needed to flip
 *@n: int
 *@m: int
 *Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i > 0)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
