#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != 10)
	{
	i--;
	}
	for (i = 10; i > 0; i--)
	{
	printf("%c", s[i]);
	}
}
