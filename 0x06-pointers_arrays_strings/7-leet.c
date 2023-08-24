#include "main.h"
/**
 *leet - function that encodes a string into 1337
 *@s: char
 *Return: returns s
 */
char *leet(char *s)
{
	int i;
	int n;
	int a;

	char x[] = "oOlLeEaAtT";
	char y[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		a = 0;
		while (x[n] != '\0')
		{
			if (s[i] == x[n])
			{
				a = n;
				s[i] = y[a];
			}
			n++;
		}
		i++;
	}
	return (s);
}
