#include <stdio.h>
/**
 *main - the start point of the program's execution
 *Printf: prints a string
 *Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzBuzz");
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d", i);
		}
		if (1 < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
