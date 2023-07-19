#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function to perform addition operation
 * @a: the first integer
 * @b: the second integer
 * Return: the addition of a and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - function to perform subtraction operation
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to perform subtraction operation
 * @a: the first integer
 * @b: the second integer
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to perform division operation
 * @a: the first integer
 * @b: the second integer
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to perform modulo operation
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
