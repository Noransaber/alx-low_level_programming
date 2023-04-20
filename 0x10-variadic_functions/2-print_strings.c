#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return:voide
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args; /*start out list of atgs*/

	va_start(args, n);/*init list or agrs with nums of args*/

	for (i = 0; i < n; i++)/*looping on args*/
	{
	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (i < n - 1 && separator != NULL)/*checking the separator*/
	{
		printf("%s", separator);/*print the separator*/
	}
	va_end(args);
}
printf("\n");
}
