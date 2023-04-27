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
list_t *new; /*decalre a new pointer for the new node*/
list_t *temp = *head; /*declare a ptr to travers the list*/
unsigned int len = 0;

while (str[len]) /*looping over the characters in str*/
len++;

new = malloc(sizeof(list_t)); /* Allocate memo for new node*/
if (new == NULL)/*checking if malloc failed*/
return (NULL);

new->str = strdup(str); /*dupl the input str and assign it to new*/
new->len = len; /* Assign the len of the input str to the new len field*/
new->next = NULL;

if (*head == NULL)
{
*head = new;/*If so,set the head of the list to ptr to the new node*/
return (new);
}

while (temp->next) /* Loop over nodes in list until last one is reached*/
temp = temp->next;

temp->next = new; /* Set next field of last node in list to ptr to new node*/

return (new);
}
