#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - a function that assigns a number bytes to a buffer.
 * @file: file name
 * Return: pointer to new buff
 */
char *create_buffer(char *file)
{
	char *bfr;

	bfr = malloc(sizeof(char) * 1024);

	if (bfr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bfr);
}


/**
 * close_file - a function that exits a file's descriptors.
 * @fd: file descriptors
 */
void close_file(int fd)
{
	int t;

	t = close(fd);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Afunction that duplicates the contents of a file to another file.
 * @argc: The num of arguments
 * @argv: Array of pointers
 * Return: 0
 * Description: Test program
 */
int main(int argc, char *argv[])
{
	int frm, t, r, w;
	char *bfr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfr = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, bfr, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bfr);
			exit(98);
		}

		w = write(t, bfr, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bfr);
			exit(99);
		}

		r = read(frm, bfr, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bfr);
	close_file(frm);
	close_file(t);

	return (0);
}

