#include "main.h"

/**
 * *_memset - implements function prototype
 * @s: starting address of memory
 * @n: number of bytes to be filled
 * @b: value to be filled
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);

}
