#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: NULL if min > max and if malloc fails, returns pointer
 * to the newly created array on success
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;

	a = malloc((len + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
