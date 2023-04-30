
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
listint_t *pre_node = *head;/*ptr to point on the head*/
listint_t *new_node; /*create new node */
unsigned int i;

/*allocate new memo for the new node*/
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL || head == NULL)
{/*check if allocation fail*/
return (NULL);
}

new_node->n = n;/*updating the value of new node*/
new_node->next = NULL;/*updating the link of the new node*/

/*if list is empty insert the new node as a head*/
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/*traversing the list to fin node before the insertion point*/
for (i = 0; i < idx -1; i++)
{
if (pre_node == NULL)
{
	return (NULL);
}
pre_node = pre_node->next;
}

new_node->next = pre_node->next;
pre_node->next = new_node;
return (new_node);
}
