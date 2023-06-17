#include <stdio.h>

/**
 * main - entry point to the program that print alphabets without e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
