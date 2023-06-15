#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	unsigned int i;
	for (i = 0; current !=NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
