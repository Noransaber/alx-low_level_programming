#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *temp; /*Declare a pointer to a temporary node*/

while (head)
{
temp = head->next; /*Set the temporary pointer to the next node in the list*/
free(head->str);/*Free memo allocated for str field of current node*/
free(head);/*Free memo allocated for current node*/
head = temp;/*Set h ptr to point to next node in list*/
}
}

