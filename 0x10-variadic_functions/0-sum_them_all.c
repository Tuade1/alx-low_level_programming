#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of arguments passed
 * Return: the sum of all its parameters, 0 if n is NUll.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	unsigned int b;
	unsigned int c = 0;

	va_start(a, n);

	while (i < n)
	{
		b = va_arg(a, int);
		c += b;
		i++;
	}
	va_end(a);
	return (c);
}
