#include "main.h"

/**
 * swap_int - swap value of teo integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
