#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 *Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 97;

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar(i);
		i++;
	}
}
