#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of agrs
 * @...: var num of args
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	/*start for the list of args*/
	va_list list;
	/*check if n of args 0*/
	if (n == 0)
		return (0);
	/*start list of args to apply code on it */
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
