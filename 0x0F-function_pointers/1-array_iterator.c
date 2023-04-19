#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each  ele of an arr
* @array: arr
* @size: elem in aara
* @action: pointer to print in regular
* Return: void
*/
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

