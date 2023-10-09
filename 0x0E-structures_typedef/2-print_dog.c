#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 *
 * @d: Pointer to struct dog to print.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	char *name = (d->name != NULL) ? d->name : "(nil)";
	char *owner = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
