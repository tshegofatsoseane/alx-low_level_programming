#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that write the char
 * @c: printed char
 * Return: Output results
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
