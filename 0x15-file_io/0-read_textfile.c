#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it to the posix
 *@filename: is the file name
 *@letters: the number of letters printed
 *Return: returns the number of letters printed else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b;
	int i;
	char *x = malloc(sizeof(char) * letters);

	if (!filename)
	{
		return (0);
	}
	if (!x)
	{
		return (0);
	}
	i = open(filename, O_RDWR);
	if (i == -1)
	{
		free(x);
		return (0);
	}
	a = read(i, x, letters);
	if (a == -1)
	{
		free(x);
		return (0);
		close(i);
	}
	close(i);
	b = write(STDOUT_FILENO, x, a);
	if (b == -1)
	{
		free(x);
		return (0);
	}
	if (b != a)
	{
		return (0);
	}
	return (a);
}
