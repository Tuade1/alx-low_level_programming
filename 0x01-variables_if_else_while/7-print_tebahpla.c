#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 25;

	while (i >= 0)
	{
		putchar('a' + i);
		i--;
	}
	putchar('\n');
	return (0);
}
