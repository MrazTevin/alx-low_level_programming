#include <stddef.h>

/**
* int_index - searches for an integer in an array using a comparison function
* @array: pointer to the array of integers
* @size: number of elements in the array
* @cmp: pointer to the comparison function
*
* Return: index of the first matching element, or -1 if no match or on error
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

