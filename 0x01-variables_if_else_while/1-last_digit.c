#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point or the starting point of a c program's execution
*Printf function used to a print a string
*Return: always(0)
*/
int main(void)
{
	int n;
	int lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	printf("Last digit of %d", n);
	if (lastnum < 6 && lastnum != 0)
	{
		printf(" is %d and is less than 6 and not 0\n", lastnum);
	}
	else if (lastnum > 5)
	{
		printf(" is %d and is greater than 5\n", lastnum);
	}
	else if (lastnum == 0)
	{
		printf(" is %d and is 0\n", lastnum);
	}
	return (0);
}

