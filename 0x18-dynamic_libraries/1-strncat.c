#include "main.h"
/**
 *_strncat - function the concatenates two strings
 *@dest: char
 *@src: char
 *@n: int
 *Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0' && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
