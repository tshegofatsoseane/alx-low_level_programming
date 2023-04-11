#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create array of size size and assign char c
 * @str: string given as a parameter.
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *newstr;
	size_t  len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	newstr = malloc(len * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}

	memcpy(newstr, str, len * sizeof(char));

	return (newstr);
}
