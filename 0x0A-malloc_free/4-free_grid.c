#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 *
 * @grid: the grid we'll free up
 * @height: the number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = height;

	while (j >= 0)
	{
		free(grid[j]);
		j--;
	}
	free(grid);
}
