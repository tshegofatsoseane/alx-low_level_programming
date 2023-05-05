#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - a function that changes a bit at a given possition to one
 * @n: pointer pointing to number to chnage
 * @index: index
 * Return: 1 if it worked, -1 if it didnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
