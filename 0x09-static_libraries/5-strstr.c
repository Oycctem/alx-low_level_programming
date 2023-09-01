#include "main.h"
/**
 *_strstr - function that locates a substring
 *@haystack: string being searched
 *@needle: substring thats being searched for
 *Return: returns null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int a = 0;

	while (haystack[i])
	{
		while (needle[a])
		{
			if (haystack[i + a] != needle[a])
				break;
			a++;
		}
		if (!needle[a])
			return (&haystack[i]);
		i++;
	}
	return ('\0');
}
