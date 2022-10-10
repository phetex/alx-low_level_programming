#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *x;

	if (name == NULL || owner == NULL)
		return (NULL);

	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	x->name = malloc(sizeof(char) * (i + 1));
	if (x->name == NULL)
	{
		free(x);
		return (NULL);
	}
	strcpy(x->name, name);

	x->age = age;

	x->owner = malloc(sizeof(char) * (j + 1));
	if (x->owner == NULL)
	{
		free(x->name);
		free(x);
		return (NULL);
	}
	strcpy(x->owner, owner);

	return (x);
}
