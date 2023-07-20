#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;
	int b;
	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(a, int);
		printf("%d", b);

		if ((i <= (n - 2)) && (separator != NULL))
		{
			printf("%c ", *separator);
		}
	}
	printf("\n");
	va_end(a);
}
