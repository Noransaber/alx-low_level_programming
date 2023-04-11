#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of arr
 * @height: height
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}
	/* Initialize all elements of the 2D array to 0*/
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
	return (grid);
}
