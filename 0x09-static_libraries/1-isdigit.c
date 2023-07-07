#include "main.h"
#include <ctype.h>

/**
 * _isdigit - program to check if character is digit or not
 * @c: charactr to be checked
 * Return: 1 if digit and 0 if not digit.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
