#include "main.h"
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 *@s:string or segmant
 * @accept: bytes
 * Return: (dest)
 */

unsigned int _strspn(char *s, char *accept)
{
	int dest;

	dest = strspn(s, accept);
	return (dest);
}
