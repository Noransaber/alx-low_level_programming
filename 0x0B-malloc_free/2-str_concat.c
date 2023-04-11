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
	char *con_str;
	size_t len1, len2, t_len, i, j;

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
	/* Get the len of them*/
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}
	/* addition the lens*/
	t_len = len1 + len2 + 1;
	/* start new mem for concat_str*/
	con_str = (char *) malloc(t_len * sizeof(char));
	/* checking if it successed*/
	if (con_str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	con_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	con_str[len1 + j] = s2[j];
	}
	con_str[t_len - 1] = '\0';
	return (con_str);
}
