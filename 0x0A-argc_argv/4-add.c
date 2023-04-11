#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that the sum of positive numbers
 * @argc: no. of args passed
 * @argv: array of pointers to the args
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans = 0;

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2]; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		ans += atoi(argv[num1]);
	}

	printf("%d\n", ans);

	return (0);
}
