#include "main.h"

/**
 * rot13 -  encodes a string
 * @:
 * Return: the value
 */

char *rot13(char *str)
{
	char *output;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	output[i] = (char)(((str[i] - 13) % 26) + 'a');
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
	output[i] = (char)(((str[i] - 13) % 26) + 'A');
	}
	}
	return (output);
}
