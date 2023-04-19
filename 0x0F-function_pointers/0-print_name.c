#include "function_pointers.h"
#ifndef PRINT_NAME_C
#define PRINT_NAME_C

void print_name(char *name, void (*f)(char *))
{
f(name);
}
#endif
