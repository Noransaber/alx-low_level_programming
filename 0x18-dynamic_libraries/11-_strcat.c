#include "main.h"
/**
* _strcat - join two str
* @dest: where i'll store my str
* @src: from where i'll get my str
* Return: void
*/

char *_strcat(char *dest, char *src)
{
int a;
int b;


a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}


dest[a] = '\0';
return (dest);
}

