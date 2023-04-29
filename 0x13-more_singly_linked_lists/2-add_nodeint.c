#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: new int val
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t  *New_Start_Node = NULL; /*declare a new pointer to the list*/
/*allocate memo for the new pointer*/
New_Start_Node = (struct listint_s *)malloc(sizeof(struct listint_s));
if (New_Start_Node == NULL)
{ /*check if the allocation is failed */
return (NULL);/*if so Return NULL*/
}


New_Start_Node->n = n; /*update the value of the data by new one*/
New_Start_Node->next = *head;/*update the value of add by the head address*/
*head = New_Start_Node; /*update the head to point to the new node*/
return (New_Start_Node);



}
