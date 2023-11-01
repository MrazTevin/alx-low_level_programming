#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string using malloc
* @str: input string
*
* Return: pointer to newly allocated space containing the duplicated string
* or NULL if str is NULL or if memory allocation fails
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, length = 0;

if (str == NULL)
{
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL); /* Memory allocation failed */
}

for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}

