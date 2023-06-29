#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int e = n - 1;
	int i;

	while (b < e)
	{
		i = a[b];
		a[b] = a[e];
		a[e] = i;
		b++;
		e--;
	}
}
