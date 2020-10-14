#include "holberton.h"

/**
 * free_grid - Free a 2 dimensional grid previously created
 * by alloc_grid function.
 * @grid: Array of arrays of integer numbers.
 * @height: Grid rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
