#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints dog info
 * @d: pinter to strcut
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	d->name = "(nil)";

	if (d->owner == NULL)
	d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
