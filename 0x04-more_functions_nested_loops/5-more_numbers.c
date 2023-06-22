#include "main.h"

/**
 * more_numbers - to print numbers 0 to 14
 * Description: to print numbers 0 to 14 on 10 lines
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
