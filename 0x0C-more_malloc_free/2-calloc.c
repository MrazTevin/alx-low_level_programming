#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes it to zero
* @nmemb: number of elements in the array
* @size: size of each element in bytes
*
* Return: pointer to the allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *char_ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL); /* Memory allocation failed */

char_ptr = ptr;

for (i = 0; i < nmemb * size; i++)
{
char_ptr[i] = 0; /* Initialize memory to zero */
}

return (ptr);
}

