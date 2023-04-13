#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b:number
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "Error: malloc failed - %s\n", strerror(errno));
	exit(98);
	}
	return (ptr);
}
