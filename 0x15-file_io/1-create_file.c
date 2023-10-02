#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: the file name
 *@text_content: text being added to the file
 *Return: returns 1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t a, b = 0;
	int i;

	if (!filename)
	{
		return (-1);
	}
	for (a = 0; text_content && text_content[a]; a++)
	{
	}
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
	{
		return (-1);
	}
	if (a)
	{
		b = write(i, text_content, a);
	}
	if (b == -1)
	{
		return (-1);
	}
	close(i);
	return (1);
}
