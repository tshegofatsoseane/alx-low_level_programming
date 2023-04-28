#include <stdlib.h>
#include "main.h"
/* string_nconcat - concatenates n bytes of string one to string two
 * @str1: string to append to
 * @str2: string to concatenate
 * @byte_n: number of bytes
 * Return: pointer to string
 */
char *string_nconcat(char *str1, char *str2, unsigned int byte_n)
{
	char *result;
	unsigned int str1_len = 0;
	unsigned int str2_len = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str1 == NULL)
	{
		str1 = "";
	}

	if (str2 == NULL)
	{
		str2 = "";
	}
	while (str1[str1_len])
	{
	    str1_len++;
	}
	while (str2[str2_len])
	{
		str2_len++;
	}

	if (byte_n >= str2_len)
	{
		byte_n = str2_len;
	}

	result = malloc((str1_len + byte_n + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	while (j < byte_n)
	{
		result[i + j] = str2[j];
		j++;
	}

	result[i + j] = '\0';
    return (result);
}
