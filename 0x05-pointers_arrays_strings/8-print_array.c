#include "main.h"
#include <stdio.h>

/**
 * print_array - print the n elements of an array
 * @a: the pointer to the array
 * @n: the variable representing the number in the array
 */

void print_array(int *a, int n)
{
	int b;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d", a[0]);

	for (b = 1; b < n; b++)
	{
		printf(", %d", a[b]);
	}
	printf("\n");
}
