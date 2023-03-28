#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	s--;
	for (o = i; o > 0; i--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
