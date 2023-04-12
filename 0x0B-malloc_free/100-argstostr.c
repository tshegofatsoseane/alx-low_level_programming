#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: input integer
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int current_position;
	char *result;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *) malloc(sizeof(char) * total_length);

	if (result == NULL)
	{
		return (NULL);
	}

	current_position = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position] = '\n';
		current_position++;
	}

	result[current_position] = '\0';
	return (result);
}
