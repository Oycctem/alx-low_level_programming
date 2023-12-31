#include "main.h"
/**
 *main - entry point of the code
 *@argc: number of arguments
 *@argv: array
 *Return: returns 0 if successful else
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *x, *y;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	x = argv[1];
	y = argv[2];

	a = open(x, O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", x);
		exit(98);
	}
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", y);
		exit(99);
	}
	error_handling(a, b, x, y);
	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
		exit(100);
	}
	if (close(b) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b);
		exit(100);
	}
	return (0);
}
/**
 * error_handling - checks and handles errors
 * @a: int
 * @b: int
 * @x: char
 * @y: char
 */
void error_handling(int a, int b, char *x, char *y)
{
	ssize_t g, j;
	char buffer[NBYTES];

	do {
		g = read(a, buffer, NBYTES);
		if (g == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", x);
			exit(98);
		}
		if (g)
		{
			j = write(b, buffer, g);
			if (j != g)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", y);
				exit(99);
			}
		}
	} while (g);
}
