#include "main.h"
/**
* _strspn - cal the initial len of the str
* @s: str
* @accept: pointer to char len
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int q = 0;
int w;


while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
{
q++;
break;
}
else if (accept[w + 1] == '\0')
return (q);
}
s++;
}
return (q);
}

