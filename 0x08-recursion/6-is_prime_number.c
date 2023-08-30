#include "main.h"
/**
 *_number - function that checks if n is prime
 *@n: int
 *@x: int
 *Return: returns result
 */
int _number(int n, int x)
{
	if (x * x > n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
		return (_number(n, x + 2));
}
/**
 *is_prime_number - function that returns 1 if int is prime otherwise 0
 *@n: int
 *Return: returns result
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
		return (_number(n, 3));
}
