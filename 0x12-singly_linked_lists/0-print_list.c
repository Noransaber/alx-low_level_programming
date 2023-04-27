#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head or the pointer to the first node element
 * Return: elemts of the node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	if (!h->str)
	{
	printf("[0] (nil)\n");
	}
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
