#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@n: char
 *Return: returning s
 */
char *cap_string(char *n)
{
	int i = 0;

	if (n[i] >= 'a' && n[i] <= 'z')
	{
		n[i] -= 32;
	}
	while (n[i])
	{
		if (n[i] == '\n' || n[i] == ' ' || n[i] == '\t' || n[i] == ',' || n[i] == ';'
				|| n[i] == '.' || n[i] == '!' || n[i] == '?' || n[i] == '"'
				|| n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == 'i}')
		{
			if (n[i] >= 'a' && n[1] <= 'z')
			{
				n[i] -= 32;
			}
		}
	else
	{
		i++
	}
	return (n);
}
