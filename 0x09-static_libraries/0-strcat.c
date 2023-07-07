#include "main.h"
#include <string.h>

/**
 * _strcat - to append 2 strings together
 * @dest: the pointer to the destination string
 * @src: the pointer to the source string
 * Return: a pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
