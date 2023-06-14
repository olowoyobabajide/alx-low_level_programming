#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *dup;

	a = 0;
	b = 0;

	dup = malloc(sizeof(*str) * a + 1);

	if (str == NULL || dup == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		dup[b] = str[b];
	}
	return (dup);
}
