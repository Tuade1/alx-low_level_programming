#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n--;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i--;
		n--;
	}
}
