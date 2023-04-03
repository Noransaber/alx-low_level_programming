#include "main.h"
 #include <string.h>

/**
 * *_memset - fills memory with contant bytes
 * @s: pointer to memory
 * @b: constant bytes
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
