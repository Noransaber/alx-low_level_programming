#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first numb
 * @m: sec num
 * Return: number of bits that flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int current_pos;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_pos = exc >> i;
		if (current_pos & 1)
			counter++;
	}
	return (counter);
}
