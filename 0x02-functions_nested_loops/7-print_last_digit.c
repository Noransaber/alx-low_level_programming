#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: is the number
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;
	if (lastDigit < 0)
	{
		lasatDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0')
		return (lastDigit);
}
