#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - a function that gives value of bit at an index
 * @n: lookup num
 * @index: bit possition
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value_1;

	if (index > 63)
	{
		return (-1);
	}

	bit_value_1 = (n >> index) & 1;

	return (bit_value_1);
}
