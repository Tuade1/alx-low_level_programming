#include "main.h"

/**
 * print_line - to print lines
 * @n: the number of lines to be printed
 * Desciption: to print lines that end with a newline character
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n);
}
