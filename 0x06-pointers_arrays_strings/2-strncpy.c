#include "main.h"

/**
 * _strncpy - a function to copy a string
 * @dest: the destination to copy the string to
 * @src: the source to copy the file from
 * @n: the number of characters to copy
 * Return: the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
