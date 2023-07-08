#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: the string of argumants passed to the program
 * Return: 1 if a symbol is passed instead of a number
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *j;
	long int num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &j, 10);

			if (*j != '\0' || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
