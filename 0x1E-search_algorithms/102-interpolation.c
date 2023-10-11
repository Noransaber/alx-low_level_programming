#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: Array to search in
 * @size: Number of array eles
 * @value: what we are search about
 * Return: index of the number, or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lo, hi;
	double f;

	if (array == NULL)
		return (-1);

	lo = 0;
	hi = size - 1;

	while (size)
	{
		f = (double)(hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
		pos = (size_t)(lo + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;

		if (lo == hi)
			break;
	}

	return (-1);
}
