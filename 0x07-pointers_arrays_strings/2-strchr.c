#include "main.h"
/**
 *_strchr - fucntion that locates a character in a string
 *@s: string to be scanned
 *@c: character to be searched
 *Return: returning s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
