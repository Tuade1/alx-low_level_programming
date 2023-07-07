#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 * @s: pointer to the destination string
 * @b: the constant byte or character to use to fill
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
