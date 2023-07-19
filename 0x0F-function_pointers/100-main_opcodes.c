#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints the opcode of its own main function
 * @argc: The number of arguments passed
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *main_a = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_a[i]);
	}
	printf("\n");
	return (0);
}
