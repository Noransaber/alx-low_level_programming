#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int index;

	while (s[len] != '\0')
	{
	len++;
	}
	for (index = len -1; index >= 0; index--)
	{
	printf("%c", s[index]);
	}
}
