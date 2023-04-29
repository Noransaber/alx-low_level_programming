#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: ptr to the 1th elem in the linked list
 *
 * Return: the data in the ele that was deleted,
 * or 0 if the list is empty
 */



int pop_listint(listint_t **head)
{
int h_data;
listint_t *h_link;

if (!head || !*head)/*check if it empty*/
{
return (0);
}

h_data = (*head)->n;
h_link = (*head)->next;

free(head);
*head = h_link;

return (h_data);
}
