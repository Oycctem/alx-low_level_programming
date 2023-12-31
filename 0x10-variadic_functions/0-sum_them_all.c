#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum
 *@n: int
 *Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);

	while (i < n)
	{
		sum += va_arg(x, int);
		i++;
	}
	va_end(x);

	return (sum);
}
