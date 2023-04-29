#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - delete the all nodes one by one/
 * @head: pointer to the first elem in the list
 *
 * Return: voide
 */


void free_listint(listint_t *head)
{
listint_t *helper = head; /*init another pointer and it's equal head*/

while (helper != NULL)/*loop for traversing over the list*/
{
helper = helper->next;/*helper move to the next node*/
free(head);/*free head*/
head = helper;/*head move to helper node*/
}
}
