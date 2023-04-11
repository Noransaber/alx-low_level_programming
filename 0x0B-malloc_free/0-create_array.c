#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of arr
 * @c: charatecers
 * Return: 0 if null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
	return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}
	/* to initialize first ele with specific char*/
	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}
	/* return the pointer of the arr character*/
	return (arr);
}
