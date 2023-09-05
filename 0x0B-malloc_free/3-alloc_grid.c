#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - function used to allocate memory to grid
 *@width: int
 *@height: int
 *Return: returns d
 */
int **alloc_grid(int width, int height)
{
	int i, n;
	int **d;

	if (width <= 1 || height <= 1)
	{
		return ('\0');
	}
	d = malloc(height * sizeof(int *));
	if (d == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
			if (d[i] == NULL)
			{
				for (n = 0; n < i; n++)
					free(d[n]);

				free(d);
				return ('\0');
			}
		for (n = 0; n < width; n++)
		{
			d[i][n] = 0;
		}
	}
	return (d);
}
