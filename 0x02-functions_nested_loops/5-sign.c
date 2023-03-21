#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the number
 * Return: 1 if  n > 0, 0 if n =  zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
