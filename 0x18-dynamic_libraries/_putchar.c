#include "main.h"
/**
 * _putchar - writes the char c to stdout
 * @c: char to be printed
 * Return: On success 1.
 * ERROR, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

