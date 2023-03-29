#include "main.h"

/**
 * rot13 -  encodes a string
 * @:
 * Return: the value
 */

char *rot13(char *str)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (str[i] == data1[i])
		{
		str[i] = data2[i];
		break;
		}
		}
		return(str);
	}
}
