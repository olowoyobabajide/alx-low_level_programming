#include "main.h"

/**
 * _memset - entry point
 * @s: first char
 * @b: second char
 * @n: unsigned int
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
