#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be pronted between nmbs
 * @n: number of args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, result;

	/*start our list of args*/
	va_list(list);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		/*store our numbers in result then print it*/
		result = va_arg(list, int);
		printf("%d", result);
		/*if this is not the last integer print the separator*/
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(list);
	/*printf new line at the end of the fun*/
	printf("\n");
}
