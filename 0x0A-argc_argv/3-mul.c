#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%d\n", first * second);
	}
	else
	{
		printf("Error\n");
	return (0);
	}
}
