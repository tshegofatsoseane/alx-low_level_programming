#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary num to unsigned int
 * @b: binary number
 * Return: results
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal_val = 0;

	if (!b)
	{
		return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		decimal_val = 2 * decimal_val + (b[j] - '0');
	}

return (decimal_val);
}
