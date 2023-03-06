#include "main.h"

/**
 * _strchr - entry point
 * @s: pointer
 * @c: character to be checked
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
