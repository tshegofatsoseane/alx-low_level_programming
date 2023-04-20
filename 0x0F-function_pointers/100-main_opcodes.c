#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *start = (char *)main;

	print_opcodes(start, num_bytes);

	return (0);
}

void print_opcodes(char *start, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%02x", *(unsigned char *)(start + i));
	}
	printf("\n");
}
