#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: pointer of duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate, *new_str;
	char *p;

	int len = 0;

	if (str == NULL)
		return (NULL);
	new_str = str;
	while (*(str + len))
		len++;
	duplicate = malloc(sizeof(*str) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	p = duplicate;

	while (*new_str)
		*duplicate++ = *new_str++;
	*duplicate = '\0';
	return (p);
}
