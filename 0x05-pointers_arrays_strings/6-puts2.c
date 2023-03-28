#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: charachters
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	int o;
	char *y = str;

	while (*y != '\0')
	{
	y++;
	i++;
	}
	t = i - 1;
	for (o = 0; o <= t;  o++)
	{
	if (o % 2 == 0)
	{
	_putchar(str[o]);
	}
	}
	_putchar('\n');
}
