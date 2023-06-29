#include "main.h"

/**
 * string_toupper - function to change all lowercase to uppercase
 * @str: the string to be converted to uppercase
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
