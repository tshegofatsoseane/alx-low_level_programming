#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - a function which prints the binary equivalent of a dec num
 * @n: number parameter
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int holder;

	for (j = 63; j >= 0; j--)
	{
		holder = n >> j;

		if (holder & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}

	if (!counter)
	{
		_putchar('0');
	}
}
