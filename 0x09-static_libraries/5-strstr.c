#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to be searched in
 * @needle: pointer to the substring
 * Return: NULL if substring is not found and a pointer to haystack if found
 */

char *_strstr(char *haystack, char *needle)
{
	char *i;

	i = strstr(haystack, needle);

	return (i);
}
