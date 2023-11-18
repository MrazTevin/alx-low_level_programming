#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Structure for a linked list node */
/**
* struct list_s - A structure representing a node in a singly linked list.
* @str: A pointer to a string (the data stored in the node).
* @len: The length of the string.
* @next: A pointer to the next node in the linked list.
*
* Description:
* The `list_s` structure defines a node in a singly linked list. Each node
* contains a string (`str`) and its length (`len`). The `next` field points to
* the next node in the list. If `next` is NULL,
* it indicates the end of the list.
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* MAIN_H */

