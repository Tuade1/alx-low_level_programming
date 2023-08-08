#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1024
#define SE STDERR_FILENO
/**
 * main - program that copies a file to another file
 * @argc: the count of argument passed
 * @argv: the arguments passed as string
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int in_fd, out_fd, istat, ostat;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	in_fd = open(argv[1], O_RDONLY);
	if (in_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	out_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (out_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		istat = read(in_fd, buf, MAXSIZE);
		if (istat == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (istat > 0)
		{
			ostat = write(out_fd, buf, (ssize_t) istat);
			if (ostat == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (istat > 0);
	istat = close(in_fd);
	if (istat == -1)
		dprintf(SE, "Error: Can't close fd %d\n", in_fd), exit(100);
	ostat = close(out_fd);
	if (ostat == -1)
		dprintf(SE, "Error: Can't close fd %d\n", out_fd), exit(100);
	return (0);
}
