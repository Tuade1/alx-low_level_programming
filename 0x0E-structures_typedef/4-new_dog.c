#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - fucntion that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;
	char *a, *b;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	a = malloc(i * (sizeof(char) + 1));
	if (a == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	b = malloc(j * (sizeof(char) + 1));
	if (b == NULL)
	{
		free(a);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		a[k] = name[k];
	a[i] = '\0';
	for (k = 0; k < j; k++)
		b[k] = owner[k];
	b[k] = '\0';
	new_dog->name = a;
	new_dog->age = age;
	new_dog->owner = b;
	return (new_dog);
}
