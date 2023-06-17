#include <stdio.h>

/**
 * main - entry point to program that prints alphabets with putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');

	return (0);
}
