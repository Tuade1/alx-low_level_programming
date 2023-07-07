#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the destination of the copied memory
 * @src: the source of the copied memory
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i;

	i = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (i);
}
