#include "main.h"
#include <ctype.h>

/**
 * _islower - return 1 or 0
 *@c: check for _islower
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	int c;

	if (islower(c))
	{
		return (1);
	} else
		return (0);
}
