#include "search_algos.h"

/**
 * linear_search - searching algorithm
 * @array: Array to search in
 * @size: number of eles in the array
 * @value: value to search foe
 * Return: the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (!array)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			index = (int)i;
			break;
		}
	}

	return (index);
}
