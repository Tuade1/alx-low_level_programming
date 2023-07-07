#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 *@i: int type number
 *Return: the absolute value of @i
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
