#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the num to be changes
 * @index: position of the num
 * Return: 1 f it worked and -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*check for an error*/
	if (index > 63)
		return (-1);
	/* set a bit to 0 by using << and ~ and & opertors*/
	*n = (~(1UL << index) & *n);
	return (1);
}
