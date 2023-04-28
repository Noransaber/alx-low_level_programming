#include "lists.h"
#include <stdio.h>

/**
 * print_listint - func prints all ele in node
 * @h: pointer to the first ele in the node
 * Return: counter
 */


size_t  print_listint(const listint_t *h)
{
int counter = 0; /*init our counter*/
const struct listint_s *ptr; /*init ptr to first elem in node*/
ptr = h; /*qrualize ptr by h*/

while (ptr != NULL) /*loop for traversing */
{
printf("%d\n", ptr->n); /*if it's not the last elem print the data*/
ptr = ptr->next;/*move to the next node*/
counter++;/*increase counter*/
}
return (counter);/*return counter*/
}
