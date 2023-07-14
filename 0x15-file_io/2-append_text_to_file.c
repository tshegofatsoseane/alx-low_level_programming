#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that at the end
 * @filename: Pointer pointing
 * @text_content: Appending text
 * Return: Output
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, length = 0;

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

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, length);

	if (a == -1 || w == -1)
	{
		return (-1);
	}

	close(a);

	return (1);
}
