#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees list and sets its head to NULL.
 * @head: A pointer to a ptr to the first node of the list.
 */

void free_listint2(listint_t **head)
{
struct  listint_s *current; /*init new pointer*/

if (*head == NULL)
{ /*check if head NULL*/
return;
}
while (*head != NULL)/*traversing over the list */
{
current = *head; /*set the current ptr to the current head pos*/
*head = (*head)->next;/*moing the head to next pos*/
free(current);/*free current*/
}
*head = NULL; /*assgin head to null after looing*/
}
