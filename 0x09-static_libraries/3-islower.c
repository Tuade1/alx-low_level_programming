#include "main.h"

/**
 * _islower - return 1 or 0
 *@c: check for _islower
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	} else
		return (0);
}

