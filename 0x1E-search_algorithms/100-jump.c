#include "search_algos.h"
/**
 * jump_search - searching algorithm using jump method
 * @array: pointer to sortted array
 * @size: the number of elem in the array
 * @value: key value to search about
 * Return: -1 if we didn't find the value
 * or the value
 **/
int jump_search(int *array, size_t size, int value)
{
	int idx, m, f, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	f = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		f++;
		prev = idx;
		idx = f * m;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
