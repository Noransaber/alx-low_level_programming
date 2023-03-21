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
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
