#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: function to point to
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size)
	{
		while (i < size)
		{
			action(array[i++]);
		}
	}
}
