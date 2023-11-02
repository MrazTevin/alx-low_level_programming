#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size of the memory to be allocated
*
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98); /* Cause normal process termination with a status value of 98 */
}

return (ptr);
}

