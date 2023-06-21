#include "main.h"
/**
 *print_last_digit - code to print last digit
 *@i: the integer to print the last value
 *Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	_putchar('0' + l);
	return (l);
}
