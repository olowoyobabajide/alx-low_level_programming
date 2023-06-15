#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates a memory for an array
 * @nmemb: array
 * @size: size of array
 * Return: ALways 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *str;

	a = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(size * nmemb);
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (a < size * nmemb)
	{
		str[a] = 0;
		a++;
	}

	return (str);
}
