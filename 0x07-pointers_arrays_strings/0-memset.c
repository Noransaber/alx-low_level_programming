#include "main.h"
 #include <string.h>

/**
 * _memset - fills memory with contant bytes
 * @s: pointer to memory
 * @:constant bytes
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
