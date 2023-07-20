#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints a string, followed by a new line
 * @separator: pointer to the string to be printed between strings
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *b;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(a, char*);
		if (b != NULL)
		{
			printf("%s", b);
		}
		else
		{
			printf("(nil)");
		}

		if ((separator != NULL) && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
