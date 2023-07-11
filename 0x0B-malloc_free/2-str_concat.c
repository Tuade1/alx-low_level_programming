#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * Return: NULL if the strings passed are empty and on failure,
 * returns pointer to the newly allocated space on success
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i1 = 0, i2 = 0;
	int len, i;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[i1] != '\0')
		i1++;

	while (s2[i2] != '\0')
		i2++;

	len = i1 + i2;
	a = malloc(len * (sizeof(char)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (i < i1)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[i - i1];
		}
	}
	return (a);
}
