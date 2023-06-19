#include "main.h"
/**
*_memcpy -cpy memo area
*@dest: memory to stored
*@src: memory to be copied
*@n: num of bytes
*
*Return: copied memory with n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int k = 0;
int l = n;


for (; k < l; k++)
{
dest[k] = src[k];
n--;
}
return (dest);
}

