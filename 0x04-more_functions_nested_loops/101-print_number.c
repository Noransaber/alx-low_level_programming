#include "main.h"

/**
 * print_number - prints an nteger
 *@n: is the number
 * Return: void
 */

void print_number(int n)
{
	unsigned k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('_');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
