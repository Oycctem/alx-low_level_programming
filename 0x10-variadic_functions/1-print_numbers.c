#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers
 *@separator: string to be printed
 *@n: number of integers
 *Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0;

	va_start(x, n);

	while (i < n)
	{
		if (separator && i < n - 1)
		{
			printf("%d%s", va_arg(x, int), separator);
		}
		else
		{
			printf("%d", va_arg(x, int));
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
