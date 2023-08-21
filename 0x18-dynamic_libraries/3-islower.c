#include "main.h"

/**
 * _islower - a function to check lowercase char
 * @letter: char
 * Return: Results
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}

