#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string to be concatenated to
 * @s2: the second to be concatenated
 * @n: the number of strings to be concatenated from s2
 * Return: NULL if the function fails, the pointer to the
 * new string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int l1, len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	len = l1 + n;
	a = malloc((len + 1) * (sizeof(char)));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < l1)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[i - l1];
		}
	}
	a[i] = '\0';
	return (a);
}
