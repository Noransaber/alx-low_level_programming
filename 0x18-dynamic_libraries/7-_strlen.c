#include "main.h"
/**
* _strlen - calculates the len of the str
* @str: the str to be calculated
* Return: leng
*/
int _strlen(char *str)
{
int lonli = 0;


while (*str != '\0')
{
lonli++;
str++;
}


return (lonli);
}

