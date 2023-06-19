#include "main.h"
/**
* _strcpy - make a new cpy of the str
* @dest: final dest
* @src: str to be cpoied
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int y = 0;


	while (*(src + y) != '\0')
	{
		w++;
	}
	for ( ; y < y ; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
