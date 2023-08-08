#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to be appended to the file
 * Return: 1 on success, -1 on failure or if filename is NULL
 * or -1 if filename does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
		fprintf(fp, "%s", text_content);

	fclose(fp);
	return (1);
}
