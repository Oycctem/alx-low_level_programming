#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: int
 *@n: int
 *Return : Returning 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	while (i < n)
	{
		n--;
		x = a[i]
		a[i] = a[n];
		a[n] = x;
		i++;
	}
}
