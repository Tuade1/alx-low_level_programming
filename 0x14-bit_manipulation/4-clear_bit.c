#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: the given index to set the bit to 1
 * Return: 1 if successful and -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	a = 1UL << index;

	*n = *n & ~a;

	return (1);
}
