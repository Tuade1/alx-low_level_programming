#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: the string of argumants passed to the program
 * Return: 1 if a symbol is passed instead of a number
 */

int main(int argc, char* argv[])
{
	int i;
	int sum;
	
	if (argc > 1)
	for (i = 1; i < argc - 1; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
	}
	return (0);
}
