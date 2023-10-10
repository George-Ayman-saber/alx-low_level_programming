#include "dog.h"
#include <stdlib>

/**
 *  _strlen - startpoint
 *  this is the c  program return len of str
 *  Return: counter
 *  @s: this variable that stored the string and put it in my function
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}

/**
 * *_strcpy -startpoint
 * this is a c program that do a function that copies the string pointed to by
 * src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: the pointer to dest
 * @dest: this arr that src cp to it
 * @src: this arr that cp from it to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

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
	dog_t *dog

	if (!name ||age < 0 || !owner)
		return (NULL);
	dog->name = malloc(sizeof(char)* (_stlen(name) + 1));
	if((*dog).name
	{
