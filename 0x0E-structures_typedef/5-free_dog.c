#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free dogs
 * @d: pointer to the struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
