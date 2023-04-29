#include "lists.h"

/**
 * pop_listint - removes the head node of the list
 * @head: ptr to the 1th elem in the linked list
 *
 * Return: the data in the ele that was deleted,
 * or return 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *head_link;
int head_data;

if (!head || !*head)
return (0);

head_data = (*head)->n;
head_link = (*head)->next;
free(*head);
*head = head_link;

return (head_data);
}

