#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - allocates a 2-dimensional grid of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to the allocated 2D array or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL); /* Memory allocation failed */

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory if allocation fails */
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL); /* Memory allocation failed */
}

/* Initialize each element to 0 */
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}

