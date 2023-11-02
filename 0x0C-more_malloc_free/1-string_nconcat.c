#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings up to n bytes from s2
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to concatenate
*
* Return: pointer to the newly allocated
* concatenated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concatenated;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

concatenated = malloc((len1 + n + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL); /* Memory allocation failed */

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < n; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);
}

