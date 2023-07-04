#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print the sum of two diagonals
 * square matrix of integers.
 * @a: pointer to the array
 * @size: the size of tht square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i * size + i];
	}
	for (i = size; i >= 0; i--)
	{
		d += a[i * size + (size - i - 1)];
	}
	printf("%d, %d", c, d);
}
