#include "main.h"
/**
 *_memcpy - copy memory addres
 *@dest: mem dest
 *@src: code
 *@n: byte var
 *Return: results
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
