#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the num of the elem in the node
 * @h:pointer to the head of the list
 * Return: num of elem in the list
 */


size_t listint_len(const listint_t *h)
{
size_t counter = 0; /*init our counter to count the num of elem in node*/
const struct listint_s *ptr; /*create ptr */
ptr = h; /*ptr to pint to the head*/

while(ptr != NULL){ /*looping over the node with condi */
counter++;/*if it still true increase the counter*/
ptr = ptr->next;/*move no the next node*/
}
return (counter); /*return the counter*/
}
