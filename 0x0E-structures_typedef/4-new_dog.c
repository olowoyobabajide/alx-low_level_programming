#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner's name
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mdog;

	mdog = malloc(sizeof(dog_t));

	mdog->name = name;
	mdog->age = age;
	mdog->owner = owner;
	if (mdog == NULL)
	{
		return (NULL);
	}
	return (mdog);
}
