#include "main.h"

/**
 * swap_int - swap value of the integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
