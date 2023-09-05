#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function used to merge 2 strings
 *@s1: char
 *@s2: char
 *Return: returns x
 */
char *str_concat(char *s1, char *s2)
{
	int i, n = 0, a = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		n++;
	for (i = 0; s2[i] != '\0'; i++)
		a++;

	x = malloc(sizeof(char) * (n + a) + 1);
	if (x == NULL)
	{
		return ('\0');
	}
	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		x[n + i] = s2[i];
	return (x);
}
