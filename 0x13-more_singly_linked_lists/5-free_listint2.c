#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: ptr to the list which will be freed
 */
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head != NULL)
{
current = (*head)->next;
free(*head);
*head = current;
}

*head = NULL;
}
