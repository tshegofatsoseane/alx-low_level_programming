#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @str1: input string 1
 * @str2: input string 2
 * Return: concatinated string
 */
char *str_concat(char *str1, char *str2)
{
	char *concat_string;
	size_t str1_len = 0;
	size_t str2_len = 0;
	size_t concat_len = 0;

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}

	str1_len = strlen(str1);
	str2_len = strlen(str2);
	concat_len = str1_len + str2_len + 1;

	concat_string = malloc(concat_len * sizeof(char));
	if (concat_string == NULL)
	{
		return (NULL);
	}

	memcpy(concat_string, str1, str1_len);
	memcpy(concat_string + str1_len, str2, str2_len + 1);

		return (concat_string);
}

