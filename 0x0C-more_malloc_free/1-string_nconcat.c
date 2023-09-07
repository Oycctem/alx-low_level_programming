#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two string
 *@s1: char
 *@s2: char
 *@n: int
 *Return: returns x
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x
	int i, a = 0, b = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		a++;
	for (i = 0; s2[i] != '\0'; i++)
		b++;

	x = malloc(sizeof(char) * (a + n) + 1);
	if (x == NULL)
	{
		return ('\0');
	}
	if (n >= b)
	{
		for (i = 0; s1[i] != '\0'; i++)
			x[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			x[a + i] = s2[i];
		x[a + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			x[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			x[i + a] = s2[i];
		x[a + i] = '\0';
	}
	return (x);
}

