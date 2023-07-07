#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to be appended
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
