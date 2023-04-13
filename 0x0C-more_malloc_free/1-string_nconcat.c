#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: concatenaated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, total_len;
	char *new_arr;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}
	if (n >= len2)
	{
	n = len2;
	}
	total_len = len1 + n + 1;
	new_arr = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (new_arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	new_arr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	new_arr[len1 + j] = s2[j];
	}
	new_arr[total_len] = '\0';
	return (new_arr);
}
