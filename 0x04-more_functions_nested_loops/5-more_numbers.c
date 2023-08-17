#include "main.h"
/**
 * more_numbers - prints numbers
 *_putchar: prints a char
 *Return: returning 0
 */

void more_numbers(void)
{
	char num;

	int i = 0;

	while (i < 14)
	{
		num = '0';
		while (num <= '9')
		{
			_putchar(num);
			num++;
		}
	_putchar('\n');
	i++;
}
}
