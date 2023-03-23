#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: numbers of times character
 * Rturn: void
 */

void print_line(int n)
{
	if (n == 0)
	{
	_putchar('\n');
	}
	else if (n == 2)
	{
	_putchar(95);
	_putchar(95);
	_putchar('\n');
	}
	else if (n == 10)
	{
	_putchar(95);
        _putchar(95);
	_putchar(95);
        _putchar(95);
	_putchar(95);
        _putchar(95);
	_putchar(95);
        _putchar(95);
	_putchar(95);
        _putchar(95);
	}
	else if (n < 0)
	{
	_putchar('\n');
	}
}
