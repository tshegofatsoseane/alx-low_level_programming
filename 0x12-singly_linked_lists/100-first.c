#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a function that prints a given text
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
