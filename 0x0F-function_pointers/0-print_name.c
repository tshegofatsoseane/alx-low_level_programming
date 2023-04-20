#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name using a pointer to the function
 * @name: Name of a person
 * @f: Function pointer
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
