#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if input strings are identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
