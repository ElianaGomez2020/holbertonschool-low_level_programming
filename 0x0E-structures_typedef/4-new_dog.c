#include "dog.h"
#include <stdlib.h>

/**
 *new_dog- function
 *@name: pointer
 *@age: float age
 *@owner: dog owner
 *Return: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int a, l;

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	for (l = 0; name[l] != '\0'; l++)
		;
	newdog->name = malloc((1 + l) * sizeof(char));
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
		newdog->name[a] = name[a];
	newdog->name[a] = '\0';

	for (l = 0; owner[l] != '\0'; l++)
		;
	newdog->owner = malloc((1 + l) * sizeof(char));
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (a = 0; owner[a] != '\0'; a++)
		newdog->owner[a] = owner[a];
	newdog->owner[a] = '\0';

	newdog->age = age;

	return (newdog);
}

