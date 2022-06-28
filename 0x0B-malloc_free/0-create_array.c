#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: stored character
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *values_in_char;
	unsigned int i;

	if (size == 0)
		return (NULL);

	values_in_char = malloc(sizeof(c) * size);

	if (values_in_char == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		values_in_char[i] = c;

	return (values_in_char);

}
