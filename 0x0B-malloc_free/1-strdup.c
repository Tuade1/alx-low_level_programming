#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that copys a strign to a new allocated space in memory
 * @str: the str to be copied
 * Return: NULL if str is NULL and if insufficient memory was available
 * and return the pointer to a new string on success.
 */

char *_strdup(char *str)
{
	int len = 0;
	char *a;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	a = malloc(len * (sizeof(char)) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	return (a);
	free(a);
}
