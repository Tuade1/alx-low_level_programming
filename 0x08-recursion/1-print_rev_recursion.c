#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s < '0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[strlen(s)]);
	_print_rev_recursion(s - 1);
}
