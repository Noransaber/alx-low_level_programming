#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers.
 * @min: min integers
 * @max: max integers
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
	return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; min  <=  max - min; i++)
	{
	a[i] = min++;
	}
	return (a);
}
