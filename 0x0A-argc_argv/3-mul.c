#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argv: the string of arguments
 * @argc: the number of arguments passed
 * Return: 1
 */

int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("error\n");
	}
	return (1);
}
