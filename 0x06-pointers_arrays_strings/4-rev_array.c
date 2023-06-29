#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	i = n;

	while (i >= 0)
	{
		k = a[i];
		i--;
	}
}
