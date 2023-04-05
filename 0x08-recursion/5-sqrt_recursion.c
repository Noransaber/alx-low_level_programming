
#include "main.h"

int act_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the sqrt number
 * @n: number to calc
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqrt_recursion(n, 0));
}

/**
 * act_sqrt_recursion - recurses
 * square root o num
 * @n: number to calcu
 * @i: iterator
 *
 * Return: the resulting square root
 */
int act_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (act_sqrt_recursion(n, i + 1));
}
