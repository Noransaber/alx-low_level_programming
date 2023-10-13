#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: POINTER TO THE ARRAY HAS OUR ELEMENTS
  * @left: THE LEFT PART OF OUR SUBARRAY
  * @right: THE RIGHT PART OF OUR SUBARRAY
  * @value: THE VALUE TO SEARCH FOR
  *
  * Return: NULL IF NOT FOUND, -1.
  *         Otherwise, THE INDEDEX WHERE WE FOUND THE ELEMENT.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (n = left; n < right; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = left + (right - left) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			right = n - 1;
		else
			left = n + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: POINTER TO THE ARRAY HAS OUR ELEMENTS
  * @size: NUMBER OF ELEMENTS IN THE ARRAY.
  * @value: THE VALUE TO SEARCH FOR
  *
  * Return:  NULL IF NOT FOUND, -1.
  *         Otherwise, THE INDEDEX WHERE WE FOUND THE ELEMENT.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t f = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (f = 1; f < size && array[f] <= value; f = f * 2)
			printf("Value checked array[%ld] = [%d]\n", f, array[f]);
	}

	right = f < size ? f : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", f / 2, right);
	return (_binary_search(array, f / 2, right, value));
}
