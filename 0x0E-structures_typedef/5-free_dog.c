#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free specified struct dog_t
 * @d: stuct dog_t to free
 *
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
