/**
 * new_dog - creates a new dog and stores a copy of name and owner
 *
 * @name: a string containing the dog's name
 * @age: a float containing the dog's age
 * @owner: a string containing the dog owner's name
 *
 * Return: a pointer to the new dog, or NULL if the function fails
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = strdup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	init_dog(new_dog, name_copy, age, owner_copy);

	return (new_dog);
}
