#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: pointer to input string
 * Return: Palindrome
 */
int is_palindrome(char *s)
{
	if (*s != '\0' || *(s + 1) != '\0')
	{
		return (-1);
	}
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}

	if (*s == *(s + strlen(s) - 1))
	{
		return (is_palindrome(s + 1) && is_palindrome(s + strlen(s) - 1));
	}

	return (0);
}
