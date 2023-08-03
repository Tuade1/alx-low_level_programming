#include "main.h"

/**
 * print_binary - function that prints binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int new;
	int a;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (new = n, a = 0; (new >>= 1) > 0; a++)
		;

	for (; a >= 0; a--)
	{
		if ((n >> a) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
