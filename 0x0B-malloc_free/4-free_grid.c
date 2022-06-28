#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that free a 2D grid
 * @grid: multidimensional array to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);

	}


}
