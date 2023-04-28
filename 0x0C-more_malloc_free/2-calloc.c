#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fill mem with byte
 * @s: memory area
 * @b: char
 * @n: number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - allocate mem
 * @nmembr: elemnts
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmembr, unsigned int size)
{
	char *pointer;

	if (nmembr == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmembr);

	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(pointer, 0, nmembr * size);
	return (pointer);
}
