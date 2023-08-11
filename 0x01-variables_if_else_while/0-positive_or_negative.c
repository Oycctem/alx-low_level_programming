#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - entry point or the starting point of a c program's execution
*Printf function used to a print a string
*Return: always(0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
