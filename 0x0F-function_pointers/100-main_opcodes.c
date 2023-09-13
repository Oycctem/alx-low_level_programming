#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: count
 *@argv: vector
 *Return: returns 0
 */
int main(int argc, char *argv[])
{
	int byts, i;
	char *array = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (byts = 0; byts < i; byts++)
	{
		printf("%.2x", array[byts]);
		if (byts != i - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

