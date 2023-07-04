#include "main.h"

/**
 * set_string - function to set the value of a pointer to a char
 * @s: the pointer to the value to be changed
 * @to: the value to be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
