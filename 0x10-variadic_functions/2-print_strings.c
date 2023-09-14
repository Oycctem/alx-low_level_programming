#include "variadic_functions.h"
/**
 *print_strings - function that prints a string
 *@separator: the string being printed
 *@n: number of strings
 *Return: returning nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i = 0;
	const char *a;

	va_start(x, n);

	while (i < n)
	{
		a = va_arg(x, char *);

		if (a)
		{
			printf("%s", a);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
