#include "main.h"
/**
 *
 *
 *
 *
 */
int _sqrt(int n, int x, int y)
{
	int a;

	a = (x + y) / 2;
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n && (a + 1) * (a + 1) > n)
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
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	return ( _sqrt(n, 0, n));
}
