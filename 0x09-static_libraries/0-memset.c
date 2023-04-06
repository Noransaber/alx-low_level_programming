#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "main.h"
/**
 * _memset - memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired val
 * @n: number of bytes
 *
 * Return: array with new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
