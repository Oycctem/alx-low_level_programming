#include "main.h"
/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 * @n: char
 * Return: returns n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] -= 32;
		i++;
	}
	return (n);
}
