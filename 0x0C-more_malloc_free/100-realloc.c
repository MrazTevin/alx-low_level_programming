#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with malloc(old_size)
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes, of the new memory block
*
* Return: pointer to the newly allocated memory block, or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL); /* Memory allocation failed */
return (new_ptr);
}

/* Do not do anything and return ptr if new_size is equal to old_size */
if (new_size == old_size)
return (ptr);

/* Allocate new memory block with the new_size */
new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL); /* Memory allocation failed */

/* Copy contents from the old memory block to the new one */
memcpy(new_ptr, ptr, (new_size < old_size) ? new_size : old_size);

/* Free the old memory block */
free(ptr);

return (new_ptr);
}

