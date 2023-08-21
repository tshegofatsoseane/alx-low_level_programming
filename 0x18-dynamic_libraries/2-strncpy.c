#include "main.h"
/**
 * _strncpy - a function to copy string
 * @dest: input val variable
 * @src: input val variable
 * @n: input val variable
 * Return: results
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
