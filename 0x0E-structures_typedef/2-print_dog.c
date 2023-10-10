#include "dog.h"

/**
 * print_dog - startpoint
 * this is a function that prints a struct dog
 * @d: this is the pointer to struct dog
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (name == NULL || age == NULL ||owner == NULL)
			printf("nil");

		printf("Name: %s", name);
		printf("Age: %f", age);
		printf("Owner: %s", owner);
	}
	else
		printf("");
}
