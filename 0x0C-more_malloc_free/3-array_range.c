#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum
 * @max: max
 * Return: NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int a, size, *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size;)
	{
		arr[a] = min++;
		a++;
	}

	return (arr);
}
