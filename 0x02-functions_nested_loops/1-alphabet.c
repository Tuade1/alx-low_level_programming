#include "main.h"
/**
 *main - entry point
 *print alphabet
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
