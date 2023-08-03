#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number
 * @index: the given index
 * Return: the value of the bit at the index, or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int nbit;

	if (index > 64)
	{
		return (-1);
	}

	nbit = n >> index;

	return (nbit & 1);
}
