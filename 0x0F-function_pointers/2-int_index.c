#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns index to the first integer it finds
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && cmp)
	{
		while (a < size)
		{
			cmp(array[a++]);
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	else 
	{
		return (-1);
	}
	return (0);
}
