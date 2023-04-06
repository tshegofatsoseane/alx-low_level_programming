#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * Return: natural square root of input integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * _sqrt_recursion(n - 1));
}
