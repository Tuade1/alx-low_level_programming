#include "main.h"
#include <string.h>

/**
 * _puts_recursion - program that prints a string, followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (*s > i)
	{
		_putchar('\n');
	}
		_putchar(*s);
		_puts_recursion(++s);
}
