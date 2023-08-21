#include "main.h"
/**
 * _strlen -  a funct to print length of string
 * @s: str
 * Return: results
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
