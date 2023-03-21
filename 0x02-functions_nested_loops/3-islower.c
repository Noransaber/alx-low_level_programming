#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the character to be chaked
 * Return: 1 for lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
