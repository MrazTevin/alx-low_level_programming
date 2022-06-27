#include "main.h"
#include <stdlib.h>

/**
 * _strdp - return pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;
	char *p;

	int len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
		len++;
	new_str = malloc(sizeof(*str) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	p = new_str;

	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (str);
}
