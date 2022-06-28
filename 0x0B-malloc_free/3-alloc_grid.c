#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **layout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	layout = malloc(height * sizeof(int *));
	if (layout == NULL)
	{
		free(layout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		layout[i] = malloc(width * sizeof(int));
		if (layout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(layout[i]);
			free(layout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			layout[i][j] = 0;

	return (layout);
}
