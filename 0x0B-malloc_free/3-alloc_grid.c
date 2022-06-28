#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2D Array of Integers.
 * @width: width of array
 * @height: height of array
 * Return: the 2D Array
 */

int **alloc_grid(int width, int height)
{
	int **2dArr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	2dArr = malloc(sizeof(int *) * height);

	if (2dArr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		2dArr[i] = malloc(sizeof(int) * width);
		
		if (2dArr[i] == NULL)
		{
			for(; i >= 0; i--)
				free(2dArr[i]);
				free(2dArr);
			return (NULL);
	
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			2dArr[i][j] = 0;
	}

	return (2dArr);
}

