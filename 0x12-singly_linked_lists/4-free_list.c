#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: A pointer to the head of the list.
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);  /* Free the string stored in the node */
free(temp);       /* Free the node itself */
}
}

