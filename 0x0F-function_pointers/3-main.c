#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the starting of the program
 * @argc: the argument count
 * @argv: the argument array
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	o = get_op_func(argv[2]);

	if (!o || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", o(a, b));
	return (0);
}
