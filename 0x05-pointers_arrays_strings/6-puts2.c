#include "main.h"

/**
 * puts2 - to print everyother character of a string,
 * starting with the first character
 * @str: the pointer to the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		while (i == 0)
		{
			_putchar(str[i]);
			i++;
		}

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
