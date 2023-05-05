#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - a function thatensure a  machine
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int icount = 1;
	char *character = (char *) & icount;

	return (*character);
}
