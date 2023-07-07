#include "main.h"

/**
 * _strcat - to append 2 strings together
 * @dest: the pointer to the destination string
 * @src: the pointer to the source string
 * Return: a pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
