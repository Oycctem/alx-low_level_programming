#include "main.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: string
 *@accept: bytes being searched
 *Return: returns s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
