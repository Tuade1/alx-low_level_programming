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
	if (argc < 2)
	{
		printf("error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (1);
}
