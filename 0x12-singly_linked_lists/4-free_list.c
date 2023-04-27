#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new; /* Declare a ptr to the new node*/
list_t *temp = *head; /* Declare temp ptr to trav list init to h of list*/
unsigned int len = 0; /* Declare int to hold len of str,init it to 0*/

while (str[len])
len++;

new = malloc(sizeof(list_t)); /* Allocate memo for the new node*/
if (!new) /* Check if malloc failed*/
return (NULL); /* NULL to indicate failure*/

new->str = strdup(str); /* dupl the str, assign it to new node's str*/
new->len = len; /* Assign the len of input str to new node's len*/
new->next = NULL;

if (*head == NULL) /* If it emp,set h to point to new node,return a ptr to it*/
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new; /* Set next fi of last node in list to point to new node*/

return (new); /* ptr to new node*/
}
