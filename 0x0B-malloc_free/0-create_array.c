#include <stdlib.h>

/**
* create_array - creates an array of chars and
*                initializes it with a specific char
* @size: size of the array
* @c: char to initialize the array with
*
* Return: pointer to the allocated memory or NULL if size is 0 or malloc fails
*/
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}

char *array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL); /* Memory allocation failed */
}

for (unsigned int i = 0; i < size; ++i)
{
array[i] = c;
}

return (array);
}
