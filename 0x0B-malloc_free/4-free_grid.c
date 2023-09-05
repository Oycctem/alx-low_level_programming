#include "main.h"
#include <stdlib.h>
/**
 *free_grid - functions used to free a 2 dimensional grid
 *@grid: int
 *@height: int
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

