#include <string.h>
#include "main.h"

/**
 * _memcpy - opies memory area
 * @dest: destination
 * @src: string
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
