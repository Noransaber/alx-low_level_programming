#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Rturn: On success 1.
 * On error , -1 is returned and error is set appropriatelly.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
