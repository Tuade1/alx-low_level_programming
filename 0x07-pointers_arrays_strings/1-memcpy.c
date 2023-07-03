#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: the destination of the copied memory
 * @src: the source of the copied memory
 * @n: the number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
