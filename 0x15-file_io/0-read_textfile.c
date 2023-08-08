#include <main.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text and prints it to the POSIX
 * @filename: the name of the file to be read and printed
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if file cant be opened, read or file is null or if write fails 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	ssize_t count = 0;
	ssize_t i;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	
	if (fp == NULL)
		return (0);

	while (!feof(fp))
	{
		for(i = 0, fp[i] != letters; i++)
		{
			_putchar(fp);
			count++;
		}
	}
	fclose(fp);
	return (count);
}
