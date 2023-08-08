#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1024

/**
 * main - program that copies a file to another file
 * @argc: the count of argument passed
 * @argv: the arguments passed as string
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	size_t read_size;
	int a, b;
	char buf[MAXSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((read_size = fread(buf, 1, sizeof(buf), fp1)) > 0)
	{
		fwrite(buf, 1, read_size, fp2);
	}

	a = fclose(fp1);
	b = fclose(fp2);
	if (fclose(fp1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a), exit(100);
	if (fclose(fp2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b), exit(100);
	return (0);
}
