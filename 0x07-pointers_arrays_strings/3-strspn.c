#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string
 * @accept: the string containing the characters
 * Return: the numbers of characters in the first part of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);

	return (i);
}
