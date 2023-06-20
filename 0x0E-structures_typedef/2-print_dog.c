#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: struct to print
 * Return: NULL if an element of d or d is NULL
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	if (d == NULL)
	{
		printf(" ");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
