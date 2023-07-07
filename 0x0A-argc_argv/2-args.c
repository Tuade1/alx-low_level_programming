#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argv: the string of arguments
 * @argc: the number of arguments passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
