#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter on each element of an array
 * @array: The array
 * @size: Size of array
 * @action: Function to execute on each element
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
