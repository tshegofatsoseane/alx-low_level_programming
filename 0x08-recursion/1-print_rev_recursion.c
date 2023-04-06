#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s);
	_putchar(*s);

    if (*s == '\0')
    {
	 return;
    }
}
