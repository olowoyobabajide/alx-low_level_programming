#include "main.h"

/**
 * _strcmp - entry point
 * @s1: checks first string
 * @s2: checks second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] > s2[a])
		{
			return (s1[a] - s2[a]);
		}
		if (s2[a] > s1[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
