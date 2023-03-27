#include "main.h"
#include <string.h>

/**
 * _strcpy -  copies the string pointed to by src
 * @dest: character
 * @str: string
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;
	
	while (src[n] != '\0')
	{
	n++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (0);
}
