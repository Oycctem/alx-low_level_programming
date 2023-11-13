#include "main.h"
/**
 *_strcpy - copies the string that src points
 *@dest: char
 *@src: char
 *Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
