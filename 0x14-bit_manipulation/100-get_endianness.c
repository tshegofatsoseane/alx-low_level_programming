#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_endianness - check endianness
 * Return: Output
 */
int get_endianness(void)
{
	unsigned int icount = 1;
	char *character = (char *) &icount;

	return (*character);
}
