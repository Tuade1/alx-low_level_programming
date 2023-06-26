#include "main.h"

/**
 * print_rev - to print a string in reverse
 * @s: the pointer to the string
 */

void print_rev(char *s)
{
	int i;

	for (i = '\0' - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
