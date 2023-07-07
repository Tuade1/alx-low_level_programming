#include <string.h>

/**
 * _strlen - to count the length of a string
 * @s: the pointer to the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
