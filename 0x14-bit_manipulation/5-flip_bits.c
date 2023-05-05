#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - a function which computes num of bits
 * @n: num one
 * @m: num two
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = 0;
	int counter = 0;

	unsigned long int holder;
	unsigned long int private = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		holder = private >> k;
		if (holder & 1)
		{
			counter++;
		}
	}

	return (counter);
}
