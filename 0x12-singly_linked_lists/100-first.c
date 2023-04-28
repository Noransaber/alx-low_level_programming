#include <stdio.h>

void beforeMain(void)__attribute__((constructor));
/**
 * beforeMain _ pribt statment before main to run
 * Return:void
 */
void beforeMain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
