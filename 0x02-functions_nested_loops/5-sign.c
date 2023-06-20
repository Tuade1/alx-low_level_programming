#include "main.h"
/**
 * print_sign - return 1, 0 or -1
 *@n: print +, 0, -
 *Return: 1 if greater than zero, 0 if equal to zero or -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (1);
}
