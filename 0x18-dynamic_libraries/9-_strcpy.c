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

	while (src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	dest[w] = '\0';
	return (dest);
}
