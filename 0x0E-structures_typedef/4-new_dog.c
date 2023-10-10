#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - startpoint
 * this is a  function that creates a new dog.
 * Return: 0 or null if fail
 * @name:this is a dog s name
 * @age: dog s age
 * @owner: owner s name
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	newdog->name = strdup(name);
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}

	newdog->age = age;
	newdog->owner = strdup(owner);
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
