#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function return sum of dat
 * @head: the first node at the list
 * Return: sum of the node's data
 */
int sum_listint(listint_t *head)
{

int sum;
sum = 0;

/*if head == NULL*/
if (!head)
{
return (0);
}
/*traversing over the list*/
while (head != NULL)
{
sum += head->n; /*sum all node inside the list*/
head = head->next;/*move to the next node*/

}
return (sum);
}
