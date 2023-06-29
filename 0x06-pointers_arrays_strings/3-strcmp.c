#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare two strings
 * @s1: the pointer to the first string to compare
 * @s2: the pointer to the second string to compare
 * Return: less than 0 if s1 is less than s2, 0 if they are equal
 * and greater than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = strlen(s1);
	j = strlen(s2);

	if (i > j)
	{
		k = -1;
	}
	if (i == j)
	{
		k = 0;
	}
	if (i < j)
	{
		k = 1;
	}
	return (k);
}
