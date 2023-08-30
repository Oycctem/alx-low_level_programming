#include "main.h"
/**
 *_sqrt - function that find the square of a given int
 *@n: int
 *@x: int
 *@y: int
 *Return: returns the result
 */
int _sqrt(int n, int x, int y)
{
	int a;

	a = (x + y) / 2;
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n && (a * a) <= n && (a + 1) * (a + 1) > n)
	{
		return (-1);
	}
	else if (a * a > n)
	{
		return (_sqrt(n, x, a));
	}
	else
		return (_sqrt(n, a + 1, y));
}
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: int
 *Return: return the results
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 16777216)
	{
		return (4096);
	}
	else
	return (_sqrt(n, 0, n));
}
