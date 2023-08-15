#include "main.h"
/**
 * print_last_digit - returns the last of an integer.
 * @n: the integer to extract the last digit from.
 * Return: the last digit of n.
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	return (lastdigit);
}
