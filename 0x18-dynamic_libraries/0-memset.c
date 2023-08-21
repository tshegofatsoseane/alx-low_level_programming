#include "main.h"
/**
 * _memset - a function to fil mem block
 * @s: mem address
 * @b: val
 * @n: bytes
 * Return: Results
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
