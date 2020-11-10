#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the 2 dimensional array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
