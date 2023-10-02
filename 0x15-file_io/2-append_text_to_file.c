#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: the file name
 *@text_content: the text being added at the end
 *Return: returns 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	int i = 0;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	while (text_content[i])
	{
		i++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		b = write(a, text_content, i);
	}
	if (b == -1)
	{
		return (-1);
	}
	close(a);
	return (1);
}
