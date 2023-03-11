#include "main.h"

/**
 * _strlen - entry point
 * @s: pointer
 * Return: Always 0
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
