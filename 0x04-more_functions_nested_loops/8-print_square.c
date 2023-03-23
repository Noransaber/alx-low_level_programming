#include "main.h"

/**
 * print_square -  that prints a square
 * @size: number
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	x = 0;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
