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
	int **2DArray;
	int i, j;

	if (width <=0 || height <=0)
		return (NULL);

	2DArray = malloc(sizeof(int *) * height);

	if (2DArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		2DArray[i] = malloc(sizeof(int) * width);
		
		if (2DArray[i] == NULL)
		{
			for(; i >= 0; i--)
				free(2DArray[i]);
				free(2DArray);
			return (NULL);
	
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			2DArray[i][j] = 0;
	}

	return (2DArray);
}

