#include "main.h"
#include <ctype.h>
/**
  * _isalpha - returns 1 or 0
  *@c: chech is _isalpha
  *Return: 1 if alphabetic, 0 if not alphabetic
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	} else
		return (0);
}
