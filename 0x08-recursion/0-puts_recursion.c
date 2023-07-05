#include "main.h"

/**
 * _puts_recursion - program that prints a string, followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_putchar(*s + 1);
}