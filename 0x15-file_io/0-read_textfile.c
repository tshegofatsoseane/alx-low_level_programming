#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and print content to STDOUT.
 * @filename: textfil
 * @letters: num of ltrs
 * Return: num of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, w, t;

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	t = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);

	close(file);

	return (w);
}
