#include "main.h"
/*
 *print_triangle - prints a triangle
 *@size: size of the triangle
 *_putchar; prints a char
 *Return: returns 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int rows = 1; rows <= size; rows++)
	{
		for (int space = 1; space <= size - rows; space++)
		{
			_putchar(' ');
		}
		for (int square = 1; square <= rows; square++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
