#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is the last digit of the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
