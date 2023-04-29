#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at specified index in alist.
 * @head: A pointer to a pointer to the first node of the listint_t list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: On success, 1. On failure, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
/*init ptr to point to node before the target one*/
listint_t *previous = *head;
/*init ptr to poin to the node will be deleted*/
listint_t *current = *head;
/*init ptr to poin to the node will be deleted*/
if (*head == NULL || head == NULL)
return (-1);
/*check if index = 0 we will delte the first node*/
if (index == 0)
{
current = *head;/*store ptr to first node*/
*head = (*head)->next;/*update head to point to the sec node*/
free(current);/*delet the first node*/
current = NULL;
return (1);
}
previous = *head;/*update previous = to first node*/
current = previous->next;/*update it to sec node*/
/* Move the ptrs to the next nodes till we reach the node to be deleted */
while (index != 1)
{/*loop while index != 1*/
previous = current;/*previous will track the current node*/
current = current->next;/*current will move to the next node*/
index--;/*decreament*/
if (current == NULL)
return (-1);
}
/*previous will point to the node next to current one*/
previous->next = current->next;
free(current);/*delte the node in specific index*/
current = NULL;
return (1);
}
