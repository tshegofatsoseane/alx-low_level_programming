#include "main.h"

/**
 * _isupper - function to check latter case
 * @c: character
 * Return: Results
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
