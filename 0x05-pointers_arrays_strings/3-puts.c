#include "main.h"

/**
 * _puts - to print a string
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
