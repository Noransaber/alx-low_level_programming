#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - removes node at certain idx in a list.
 * @head: A ptr to a ptr to the 1  node of the list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: On success, 1. On failure, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
/* Initialize pointers to track the previous 
and current nodes, as well as a counter variable*/
listint_t *previous = *head;
listint_t *current = NULL;
unsigned int j = 0;
/*Check if the linked list is empty*/
if (*head == NULL)
return (-1);
/*Check if we need to delete the first node*/
if (index == 0)
{
*head = (*head)->next;/*Update the head pointer to the next node*/
free(previous);/*Update the memory*/
return (1);
}
/*Traverse the linked list to find the node to be deleted*/
while (j < index - 1)
{
/* Check if we have reached the end of the linked list or the index is out of range*/
if (!previous || !(previous->next))
return (-1);
previous = previous->next;/*Move the previous pointer to the next node*/
j++;
}
/* Update pointers to delete the node*/
current = previous->next; /*Track the node to be deleted*/
previous->next = current->next; /*Update the link of the previous node*/
free(current);/* Free the memory of the node to be deleted*/
return (1);
}
