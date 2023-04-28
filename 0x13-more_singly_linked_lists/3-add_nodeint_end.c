#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: ptr to the head of the list
 * @n: new int val to be added
 *
 * Return: the add of the new ele, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *New_End_Node; /*declare 2 pointer to the list*/

New_End_Node = malloc(sizeof(listint_t));/*new memo pos for the new node*/
if (New_End_Node == NULL)/*check if the allocation field*/
{
return (NULL);
}

New_End_Node->n = n;/*update the val of newNode by he data*/
New_End_Node->next = NULL;/*update the add by NULL*/

if (*head == NULL)/*if it is the last elem in the list*/
{
*head = New_End_Node;/*add the new node*/
}
else
{
ptr = *head;/*assign poiner to the head*/
while (ptr->next != NULL) /*traverse to the end of the list*/
{
ptr = ptr->next; /*moving for the next node*/
}
ptr->next = New_End_Node; /*add the new node at the end of the list*/
}
return (New_End_Node);
}
