#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - funcion that prints the sum of two diagonals of a square
 *@a: the matrix
 *@size: size of the array
 *Return: returns void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(size + 1) * i];
		y += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", x, y);
}
