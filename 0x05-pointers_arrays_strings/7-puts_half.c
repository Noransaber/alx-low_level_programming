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
	int x;

	while (str[len] != '\0')
	{
	len++;
	}
	if (len % 2 == 1)
	{
	x = (len - 1) / 2;
	}
	else
	{
	x = len / 2;
	}
	for (; x < len; x++)
	{
	printf("%d", str[x]);
	}
	printf("\n");
}
