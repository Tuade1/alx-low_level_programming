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
	int *a;
	unsigned int i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = nmemb * size;
	a = malloc(j);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		a[i] = 0;
	}
	return (a);
}
