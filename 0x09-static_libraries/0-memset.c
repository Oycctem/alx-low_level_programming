#include "main.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@s: pointer.
 *@b: byte to fill the memory with.
 *@n: bytes to be filled
 *Return: returns S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
