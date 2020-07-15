#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - free dogs
 *@d: pointer
 *Return
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
