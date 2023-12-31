#include "main.h"
/**
 *rev_string - reverses a string
 *@s: string
 *Return: returns 0
 */
void rev_string(char *s)
{
	int len = 0;
	int beggining = 0;
	int ending = len - 1;
	char a = s[beggining];

	while (s[len] != '\0')
	{
		len++;
	}
	ending = len - 1;
	for (beggining = 0; ending >= 0 && beggining < ending; ending--, beggining++)
	{
		a = s[beggining];
		s[beggining] = s[ending];
		s[ending] = a;
	}
}
