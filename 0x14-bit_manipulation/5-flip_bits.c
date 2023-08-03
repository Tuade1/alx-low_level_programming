#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the first number
 * @m: the second number to be flipped to
 * Return: the number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int outcome;
	int i = 0;

	outcome = n ^ m;
	while (outcome)
	{
		i++;
		outcome &= (outcome - 1);
	}
	return (i);
}
