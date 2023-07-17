#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type `struct dog`
 * struct dog - the dog
 * @d: the member of struct dog
 * @name: the name of the dog d
 * @age: the age of dog d
 * @owner: the owner of dog d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
