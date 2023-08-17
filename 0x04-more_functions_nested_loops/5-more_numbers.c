#include "main.h"
/**
 * print_numbers - prints numbers
 *_putchar: prints a char
 *Return: returning 0
 */

void print_numbers(void)
{
	char num;

	for (int i = 0; i < 10; ++i)
	{	
	for (num = '0'; num <= '9'; ++num)
		{
			_putchar(num);
			_putchar('\n');
		}
	_putchar('\n');
}
}
