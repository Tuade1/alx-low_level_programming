#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create an array of chars and
 * initialize it witha specific char.
 * @size: the size of the array
 * @c: the character to be initialized with
 * Return: NULL if size is 0 or if it fails and
 * a pointer to the array if it works.
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int n;

	i = malloc(size * (sizeof(char)));

	if (size == 0 || i == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		i[n] = c;
	}
	return (i);
}
