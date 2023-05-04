#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts the binary number to decimal one
 * @b: pointer to the string
 * Return: the converted number OR 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int weight = 1;
const char *p = b;

/* check for NULL pointer*/
if (b == NULL)
return (0);

/*lopping until the end of the string*/
while (*p != '\0')
{
p++;
}
/*move back on position to be on the last character not '\0'*/
p--;
/* moving from the end of the string to the beginning*/
while (p >= b)
{
/*check for valid characters 0 and 1*/
if (*p == '1')
{
result += weight;
}

else if (*p != '0')
{
return (0);
}
/*Update weight and move pointer back one character*/
weight *= 2;
p--;
}
return (result);
}

