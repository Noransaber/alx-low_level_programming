#include "main.h"
#include <string.h>

/**
 * _strstr - ocates a substring.
 * @haystack:string
 * @needle:substirng
 * Return:dest
 */

char *_strstr(char *haystack, char *needle)
{
	char *dest = strstr(haystack, needle);

	return (dest);
}
