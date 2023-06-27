#include "main.h"
#include <stdio.h>

/**
 * print_array - print the n elements of an array
 * @a: the pointer to the array
 * @n: the variable representing the number in the array
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("\n");
}
