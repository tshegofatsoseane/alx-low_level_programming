#include "main.h"

/**
 * _isalpha - function to check alpha char
 * @c: char
 * Return: Results
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
