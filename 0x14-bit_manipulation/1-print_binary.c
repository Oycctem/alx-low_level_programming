#include "main.h"
/**
 *print_binary - function that prints the binary
 *@n: int
 *Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
