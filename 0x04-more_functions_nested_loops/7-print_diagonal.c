#include "main.h"
/**
 * print_diagonal - to print a diagonal line
 * @n: the number of lines to be printed
 */

void print_diagonal(int n);
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
