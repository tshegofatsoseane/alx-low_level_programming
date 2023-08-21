#include "main.h"
/**
 * _puts - a function to print a string
 * @str: print str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
