#include "main.h"
#include <string.h>

/**
 * print_rev - to print a string in reverse
 * @s: the pointer to the string
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
