#include "main.h"
/**
 * _strchr - entry function
 * @s: input var
 * @c: input var
 * Return: results
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
