#include "main.h"
#include <stdio.h>
/**
 * is_prime_number: returns 1 if the input integer is a prime number, else 0
 * @n: input.
 * Return output
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number(n - 1));
}

/**
 * the_prime: calculates if a number is a prime number
 * @n: input
 * @k: iteration
 * Return: result
 */

int the_prime(int n, int k)
{
	if (n == 1)
	{
		return (1);
	}

	if (n % k == 0 && k > 0)
	{
		return (0);
	}

	return (the_prime(n, n - 1));
}
