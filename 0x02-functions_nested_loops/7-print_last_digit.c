#include "main.h"
/**
 *print_last_digit - code to print last digit
 *@i: the integer to print the last value
 *Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		l = -1 * (i % 10);
		_putchar('0' + l);
		return (l);
	}
	else
	{
		l = i % 10;
		_putchar('0' + l);
		return(l);
	}
}
