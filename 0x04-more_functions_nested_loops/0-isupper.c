#include "main.h"
/**
 *_isupper - checks if character is uppercase
 *@c: the character being checked
 *Return: returning 1 if character is uppercase or 0 if it's lowercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
