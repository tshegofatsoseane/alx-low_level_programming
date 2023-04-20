#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an int in given array
 * @array: Pointer to array to search in
 * @size: Num of elements in given array
 * @cmp: Pointer to function used to compare integers in array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
