#include "main.h"
/**
 *wildcmp - function that returns 1 if a string is a palindrome, otherwise 0
 *@a: string
 *@b: string
 *Return: 1 if palindrome, otherwise 0
 */

int wildcmp(char *a, char *b)
{
	if (*a == '\0' && *b == '\0')
	{
		return (1);
	}
	if (*b == '*')
	{
		return (wildcmp(a, b + 1) || (*a != ('\0') && wildcmp(a + 1, b)));
	}
	if (*a == *b || *b == '*')
		return (wildcmp(a + 1, b + 1));
	{
		return (0);
	}
}
