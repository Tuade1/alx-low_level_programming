#include "main.c"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to find the square root
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - helper function that finds the natural square root of a number
 * @i: the number in the helper function
 * @j: the number in the helper function
 * Return: -1 if i does not have a natural square root
 */

int square(int i, int j)
{
	int k;

	k = j * j;

	if (k == i)
	{
		return (j);
	}
	else if (k < i)
	{
		return (square(i, j + 1));
	}
	else
	{
		return (-1);
	}
}
