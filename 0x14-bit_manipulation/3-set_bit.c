#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: the given index to set the bit to 1
 * Return: 1 if successful and -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	a = 1UL << index;

	*n |= a;

	return (1);
}
