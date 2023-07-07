#include "main.h"

/**
 * _strcpy - to copy the string pointed to by a pointer
 * @dest: the destination
 * @src: the pointer to the string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
