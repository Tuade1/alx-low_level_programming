#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: the array of strings passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
