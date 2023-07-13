#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the byte of each element
 * Return: NULL if malloc fails and if nmemb or size fails,
 * the pointer to the allocated memory on success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
