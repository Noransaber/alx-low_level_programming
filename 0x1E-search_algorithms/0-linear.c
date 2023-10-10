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
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
