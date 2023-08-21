#include "main.h"

/**
 * _isdigit -function to check numbers
 * @c: char var
 * Return: results
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
