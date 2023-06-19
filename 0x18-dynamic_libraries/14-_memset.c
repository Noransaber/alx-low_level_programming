#include "main.h"
/**
* _memset - fill memory with given value
* @s: start point
* @b: value
* @n: num of bytes
*
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;


for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}

