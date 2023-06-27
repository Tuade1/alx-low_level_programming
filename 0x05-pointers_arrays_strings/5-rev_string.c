#include "main.h"
#include <string.h>

/**
 * rev_string - to print a string in reverse
 * @s: the pointer to the string
 */

void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	int j;
	char k;

	for (i = 0; j = len - 1; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
