#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: contains content of first string
 * @s2: contains content of second string
 * Return: value of concatenated string
 */

char *str_concat(char *s1, char *s2)
{

	char *full_string;

	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		k++;

	full_string = malloc(sizeof(char) * k);

	if (full_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		full_string[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		full_string[j++] = s2[i];

	return (full_str);
