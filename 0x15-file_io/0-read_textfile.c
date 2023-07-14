#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text
 * @filename: text
 * @letters: num of abcs
 * Return: num of by
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
