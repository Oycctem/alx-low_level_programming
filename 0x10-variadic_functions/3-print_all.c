#include <stdio.h>
#include <stdarg.h>
/**
*print_all - functions that prints anything
*@format: the list of types of argmuents
*Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	char *x;
	int i = 0, n = 0;
	va_list a;

	va_start(a, format);

	while (format && format[i])
	{
	if (n > 0)
	{
	printf(", ");
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(a, int));
		break;
	case 'i':
		printf("%i", va_arg(a, int));
		break;
	case 'f':
		printf("%f", va_arg(a, double));
		break;
	case 's':
		x = va_arg(a, char *);
		if (x)
		{
		printf("%s", x);
		}
		printf("(nil)");
		break;
		default:
		n = 0, i++;
		continue;
	}
	n = 1;
	i++;
	}
	printf("\n");
	va_end(a);
}
