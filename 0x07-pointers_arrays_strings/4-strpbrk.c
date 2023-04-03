#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s:stirng
 * @accept:another string
 * Return:dest
 */

char *_strpbrk(char *s, char *accept)
{

	char *dest = strpbrk(s, accept);

	return (dest);
}
