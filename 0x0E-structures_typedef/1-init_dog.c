#include "dog.h"

/**
 * init_dog - initializes a struct
 * @d: struct name
 * @name: name
 * @age: age
 * @owner: owner of the dog, mine
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
