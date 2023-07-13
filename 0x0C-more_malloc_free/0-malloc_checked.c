#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the size of the memory to be allocated
 * Return: a pointer to the memory on success and a normal termination
 * process on failure
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(1);
	}

	return (a);
}
