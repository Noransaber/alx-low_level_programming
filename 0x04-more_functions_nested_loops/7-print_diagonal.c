#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: numbers
 * Return: void
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(47);
	_putchar('\n');
	}
	}
}
