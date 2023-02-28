#include "main.h"
#include <string.h>

/**
 * _strlen - check the length of a string
 * @s: checks the character
 * Return: Always 0;
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
