#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int half_len;

	while (str[len] != '\0')
	{
	len++;
	}
	half_len = len / 2;

	if (len % 2 == 1)
	{
	half_len = (len - 1) / 2;
	}
	_putchar(str[half_len]);
	_putchar('\n');
}
