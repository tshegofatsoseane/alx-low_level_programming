#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: Address of memory to be filled
 * @b: Expected value
 * @n: Bytes to be changed.
 *
 * Return: Output.
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
