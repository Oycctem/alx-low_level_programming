#include "main.h"
/**
 * _isalpha - checks if the character is an alphabetic charavter
 * @c: The character to be checked.
 * Return: 1 if c is an alphabetic character, 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
