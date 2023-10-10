#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dog struct
 * @name: dog s name
 * @age: the dog s age
 * @owner: owner s name
 * Description: just a lone dog struct in a bd kitty world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
