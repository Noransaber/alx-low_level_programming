#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: charachters
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	for (i = 0; i < 1000; i+=2)
	{
	printf("%c", (str[i]));
	}
	}
	_putchar('\n');
}