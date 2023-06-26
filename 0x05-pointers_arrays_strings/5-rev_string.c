#include "main.h"
#include <string.h>

/**
 * rev_string - to print a string in reverse
 * @s: the pointer to the string
 */

void rev_string(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		;
	_putchar(s[i]);
}
