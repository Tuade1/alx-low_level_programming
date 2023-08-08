#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number, 0 if a char is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = strlen(b) - 1;
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			sum = (sum << 1) | (b[i] - '0');
		else
			return (0);
	}
	return (sum);
}
