#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the multiplication of two number.i
 * @argc: no. of arguments input to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Return 0 If the program receives two arguments
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}
