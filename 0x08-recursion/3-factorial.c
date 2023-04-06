#include "main.h"
/**
 * factorial - compute the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of @n, or -1 if @n is negative
 */
int factorial(int n)
{
	int result = 1;
	int i;

	if (n < 0)
	{
		return (-1);
	}


	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return (result);
}
