#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one to concat
 * @s2: to concat
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t len1, len2, total_len, i, j;

	len1 = 0;
	len2 = 0;

	/* checking if str is NULL*/
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	/* Get the len of the first and sec str*/
	while (s1[len1] != '\0')
	{
	len1++;
	}

	while (s2[len2] != '\0')
	{
	len2++;
	}
	/* addition of 2 len*/
	total_len = len1 + len2 + 1;
	/* start new mem for concat_str*/
	concat_str = (char *) malloc(total_len * sizeof(char));

	/* checking if it successed*/
	if (concat_str == NULL)
	{
	return (NULL);
	}
	/* cp the first str*/
	for (i = 0; i < len1; i++)
	{
	concat_str[i] = s1[i];
	}
	/* cp the sec one*/
	for (j = 0; j < len2; j++)
	{
	concat_str[len1 + j] = s2[j];
	}
	/* adding null*/
	concat_str[total_len - 1] = '\0';
	return (concat_str);
}
