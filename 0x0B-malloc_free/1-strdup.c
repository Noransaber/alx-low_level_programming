#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in mem
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	size_t len, i;
	char *strmem;

	if (str == NULL)
	{
	return (NULL);
	}
	/* get the length*/
	len = strlen(str);

	/* allocate memory for new string*/
	strmem = (char *) malloc((len + 1) * sizeof(char));

	/*check if memory add success*/
	if (strmem == NULL)
	{
	return (NULL);
	}

	/*cp content fron input str to new mem */
	for (i = 0; i < len; i++)
	{
	strmem[i] = str[i];
	}
	strmem[len] = '\0';
	return (strmem);
}
