#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: charachters
 * Return: void
 */

void puts2(char *str)
{
	int l;
	int i;

	while (str[l] != '\0')
	{
	l++;
	}
	for (i = 0; i < l; i++)
	{
	if (str[i] % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
