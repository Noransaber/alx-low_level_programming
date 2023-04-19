#include "function_pointers.h"
#ifndef PRINT_NAME_C
#define PRINT_NAME_C

/**
 * print_name - prints the name
 * @name: pointer no the name
 * @f: pointer func
 * Return: voide
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
#endif
