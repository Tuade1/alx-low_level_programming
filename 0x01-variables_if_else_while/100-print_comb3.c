#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e;

	for (i = 0; i < 10; i++)
	{
		for (e = i + 1; e < 10; e++)
		{
			putchar('0' + i);
			putchar('0' + e);
			if (i < 8 || e < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
