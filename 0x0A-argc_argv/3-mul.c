#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: count the arg
 * @argv: array for args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, multi;
	multi = 1;

	if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
	multi *= atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}
