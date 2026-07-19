#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid created by alloc_grid
 * @grid: the grid to be freed
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

		free(grid);
}
