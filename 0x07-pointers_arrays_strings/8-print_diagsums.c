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
	int j;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			c += a[i][j];
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			d += a[i][j];
		}
	}
	printf("%d, %d", c, d);
}
