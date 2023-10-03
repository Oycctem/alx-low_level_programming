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
	char x;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		return (97);
	}
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(a);
		return (99);
	}
	while (read(a, &x, 1) == 1)
	{
		if (write(a, &x, 1) != 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(a);
			close(b);
			return (99);
		}
	}
	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a == -1 ? b : a);
		return (100);
	}
	return (0);
}
