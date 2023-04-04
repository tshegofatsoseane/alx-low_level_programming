#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: destination of stored memeory.
 *@src: source of copied memory.
 *@n: Bytes
 *
 *Return: copied memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p_dest = dest;
char *p_src = src;

	while (n-- > 0)
	{
		*p_dest++ = *p_src++;
	}
	return (dest);
}
