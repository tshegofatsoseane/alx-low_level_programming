#include <stdio.h>
#include "main.h"
/**
 * main - a function that print the number of arguments passed to the program
 * @argc: no. of args passed
 * @argv: array of args passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
