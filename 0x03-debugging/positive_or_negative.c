#include "main.h"
/**
 * positive_or_negative - print positive or negative number
 * @i: is the number to be checked
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);

	else if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is zero\n", i);
}

