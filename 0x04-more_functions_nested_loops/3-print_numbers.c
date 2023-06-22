#include "main.h"
/**
 * print_numbers - print out numbers 0 to 9
 * Description: you can only use _putchar twice
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
