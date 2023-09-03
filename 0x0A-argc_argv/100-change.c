#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: int
 *@argv: char
 *Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;
	int n;
	int a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (coins[i] <= n)
		{
		n -= coins[i];
		a++;
		}
	}
	printf("%d\n", a);

	return (0);
}
