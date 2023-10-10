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
	if (new_dog)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		return (0);
	}
	return (NULL);
}
