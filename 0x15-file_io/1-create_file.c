#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a new file.
 * @filename: A pointer pointing to to the name of the fil
 * @text_content: A pointer pointing to a string to write
 * Return: a file
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(file, text_content, length);

	if (file == -1 || w == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
