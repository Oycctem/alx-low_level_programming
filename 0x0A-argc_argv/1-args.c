#include <stdio.h>
/**
 *main - entry point or the starting point of a c program's execution
 *@argc: int
 *@argv: char
 *Return: returns 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
