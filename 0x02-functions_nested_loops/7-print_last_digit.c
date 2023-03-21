#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: is the number
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int lastGigit;

	lastGigit = c % 10;
	return (lastGigit);
}
