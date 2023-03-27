#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index;
	char tmp;

	while (s[index++])
	len++;

	for (index = len -1; index >= len / 2; index--)
	{
	tmp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
