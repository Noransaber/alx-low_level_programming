#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints num of args
 * @argc: count the num of args
 * @argv: array of args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
