#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: the given index to set the bit to 1
 * Return: 1 if successful and -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (0);

	a = 1 << index;

	*n = *n & ~a;

	return (1);
}
