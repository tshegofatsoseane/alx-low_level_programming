#include "main.h"
/**
 *swap_int - a function that swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(*a, *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
