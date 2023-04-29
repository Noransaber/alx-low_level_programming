#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at certain
 *  position in a linked list,
 * @head: pointer to pointer to the head
 * @idx: the pos to insert the new node
 * @n: new data for the new node
 * Return: the new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
struct listint_s *pre_node, *new_node; /*create new node */

pre_node = *head; /*ptr to point on the head*/
/*allocate new memo for the new node*/
new_node = (struct listint_s *)malloc(sizeof(struct listint_s));
if (new_node == NULL)
{/*check if allocation fail*/
return (NULL);
}

new_node->n = n;/*updating the value of new node*/
new_node->next = NULL;/*updating the link of the new node*/

/*if list is empty insert the new node as a head*/
if (*head == NULL || idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/*traversing the list to fin node before the insertion point*/
idx--;
while (idx != 1)
{
pre_node = pre_node->next;
idx--;
}
/*If the insertion point is beyond the end of the list*/
if (pre_node == NULL)
{
free(new_node);
return (NULL);
}
/*insert the new node after finding the prev one*/
new_node->next = pre_node->next;
pre_node->next = new_node;
return (new_node);
}
