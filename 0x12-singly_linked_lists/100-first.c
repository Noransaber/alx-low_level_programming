#include <stdio.h>

void beforeMain(void)__attribute__((constructor));
/**
 * beforeMain _ print statment before main to run
 * function is excuted
 * Return:void
 */
void beforeMain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
