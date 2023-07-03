#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string to be searched in s
 * Return: NULL if no such byte is found and a pointer to s if found
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);

	return (i);
}
