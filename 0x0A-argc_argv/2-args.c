#include <stdio.h>
/**
 *main - entry point or the starting point of a c program's execution
 *@argc: int
 *@argv: char
 *Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
