#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory called dog
 * @d: frees d
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
