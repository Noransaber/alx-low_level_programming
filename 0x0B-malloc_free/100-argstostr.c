#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count
 * @av: arry
 * Return: concat args
 */

char *argstostr(int ac, char **av)
{
	int i, total_len, pos, j;
	char *new_arr;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	total_len += strlen(av[i]) + 1;
	}
	new_arr = (char *)malloc(total_len * sizeof(char));
	if (new_arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	new_arr[pos] = av[i][j];
	_putchar('\n');
	}
	new_arr[pos] = '\0';
	return (new_arr);
}
