#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print elem of arr
 * @size: sizeof arr
 * @array: array
 * @action: pointer tp print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
