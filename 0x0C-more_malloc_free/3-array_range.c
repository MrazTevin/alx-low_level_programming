#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: minimum value (included)
* @max: maximum value (included)
*
* Return: pointer to the newly created array, or NULL on failure
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(size *sizeof(int));

if (arr == NULL)
return (NULL); /* Memory allocation failed */

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}

