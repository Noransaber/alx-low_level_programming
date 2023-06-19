#include "main.h"
/**
* _atoi - str => int.
*
* @s: str to be converted.
*
* Return: int.
*/
int _atoi(char *s)
{
int sign = 1, r = 0;
unsigned int result = 0;


while (!(s[r] <= '9' && s[r] >= '0') && s[r] != '\0')
{
if (s[r] == '-')
sign *= -1;
r++;
}
while (s[r] <= '9' && (s[r] >= '0' && s[r] != '\0'))
{
result = (result * 10) + (s[r] - '0');
r++;
}
result *= sign;
return (result);
}

