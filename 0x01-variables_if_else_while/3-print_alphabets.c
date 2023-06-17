#include <stdio.h>

/**
 * main - this is where the code to print the alphabets starts
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}
	for (i = 0; i < 26; i++)
	{
		putchar(i + 'A');
	}
	putchar('\n');
	return (0);
}
