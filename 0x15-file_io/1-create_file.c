#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: the content to be written to the file
 * Return: 1 on success, -1 on failure and if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fp, "%s", text_content);

	fclose(fp);

	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);
	return (1);
}
