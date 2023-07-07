#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: NULL if c is not found and a pointer to c if found
 */

char *_strchr(char *s, char c)
{
	char *i;

	i = strchr(s, c);

	return (i);
}
