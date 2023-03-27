#include "main.h"

/**
 * swap_int  - that swaps the values of two integers.
 * @a: number
 * @b: second number
 * Return:void
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
