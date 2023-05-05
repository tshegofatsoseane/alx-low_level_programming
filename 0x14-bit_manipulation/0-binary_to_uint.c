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
	int i;
	unsigned int dec_val = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		dec_val = 2 * dec_val + (b[i] - '0');
	}

return (dec_val);
}
