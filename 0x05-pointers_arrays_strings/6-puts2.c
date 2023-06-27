#include "main.h"
#include <string.h>

/**
 * puts2 - to print everyother character of a string,
 * starting with the first character
 * @str: the pointer to the string
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);
	int j = len - 1;

	for (i = 0; i <= j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
