#include "main.h"

/**
 * leet - function to encrypt using rot13
 * @i: the encryption
 * Return: i
 */

char *leet(char *i)
{
	int a = 0;
	int b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (i[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (i[a] == s1[b])
			{
				i[a] = s2[b];
			}
		}
		i++;
	}
	return (i);
}
