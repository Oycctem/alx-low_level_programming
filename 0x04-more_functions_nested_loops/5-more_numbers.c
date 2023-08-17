#include "main.h"
/**
 * more_numbers - prints numbers
 *_putchar: prints a char
 *Return: returning 0
 */

void more_numbers(void)
{

	int num;
	int times = 10;

	while (times > 0)
	{
		for (num = 0; num <= 14; ++num)
		{
			if (num > 9)
			{
			_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
	_putchar('\n');

	times--;
}
}
