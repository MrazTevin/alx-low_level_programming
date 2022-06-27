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

	while (str[len])
		len++;
	new_str = malloc(len + 1);
	if (p == NULL)
	return (NULL);
	p = new_str;
	while (*str)
		*p++ = *new_str++;
	*p = '\0'; /* byte is null */
	return (new_str);

}
