#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal number
 * @index: given position
 * Return: binary number or (-1) if error
 */

int get_bit(unsigned long int n, unsigned int index)
{

int bit_val_at_given_index;
/*check if the index more than 63 indi for error*/
if (index > 63)
return (-1);
/*check the value of bit at given index by Rigthshif, &*/
bit_val_at_given_index = (n >> index) & 1;
return (bit_val_at_given_index);
}
