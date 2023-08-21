#include "main.h"
/**
 * _strpbrk - a function to searche string
 * @s: str to search
 * @accept: bytes
 * Return: results
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
