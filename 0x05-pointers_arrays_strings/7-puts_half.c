#include "main.h"
#include <string.h>

/**
 * puts_half - function to print half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int n;
	int i;

	if (length_of_the_string % 2 != 0)
	{
		for (n = (length_of_the_string) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (i = length_of_the_string / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
