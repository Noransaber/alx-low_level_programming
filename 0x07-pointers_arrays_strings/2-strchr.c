#include "main.h"
#include <string.h>

/**
 * *_strchr - locates a character in a string
 * @s:string
 * @c: character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	char *mention = strchr(s, c);

	return (mention);
}
