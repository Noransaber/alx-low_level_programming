#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - integer is prime number or not prim
 * @n: num
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - cal if num is prime rec
 * @n: number
 * @i: iter
 *
 * Return: 1 if n prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
