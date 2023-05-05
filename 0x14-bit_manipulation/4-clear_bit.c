#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of a bit to zero
 * @n: pointer to pointer pointing to num to change
 * @index: index
 * Return: if successful gives one, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
