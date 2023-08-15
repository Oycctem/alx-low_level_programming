#include "main.h"

/**
*main - entry point or the starting point of a c program's execution
*Return: always(0)
*/

int main(void)
{
	char abe[] = "_putchar";
	int a;

	for (a = 0; abe[a] != '\0'; a++)
	{
		_putchar(abe[a]);
	}
	_putchar('\n');
	return (0);
}
