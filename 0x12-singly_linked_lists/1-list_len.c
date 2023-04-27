#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head or the pointer to the first ele in nodes
 * Return: len
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next; /*move to the next node*/
	}
	return (count); /* Return the total number of nodes in the list*/
}
