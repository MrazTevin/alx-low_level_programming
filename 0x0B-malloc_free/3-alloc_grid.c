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
	int **2dArray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	2dArray = malloc(sizeof(int *) * height);

	if (2dArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		2dArray[i] = malloc(sizeof(int) * width);
		
		if (2dArray[i] == NULL)
		{
			for(; i >= 0; i--)
				free(2dArray[i]);
				free(2dArray);
			return (NULL);
	
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			2dArray[i][j] = 0;
	}

	return (2dArray);
}

