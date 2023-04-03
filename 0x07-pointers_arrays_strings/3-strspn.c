#include "main.h"
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * s@string or segmant
 * @accept: bytes
 * Retrun: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int dest;

	dest = strspn(accept, s);
	return (dest);
}
