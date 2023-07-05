#include "main.h"

int prime(int i, int j);

/**
 * is_prime_number - function to determine if an interger is a prime number
 * @n: the number to check
 * Return: 0 if the integer is not a prime and 1 if it is a prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - helper function to determine if an integer is a prime number
 * @i: the number to check
 * @j: the number of times to check
 * Return: 0 if the integer is not a prime and 1 if it is a prime
 */
int prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0 && j > 0)
	{
		return (0);
	}
	return (prime(i, j - 1));
}
