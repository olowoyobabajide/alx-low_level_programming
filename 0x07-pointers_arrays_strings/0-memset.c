#include "main.h"

/**
 * _memset - entry point
 * @s: pointer
 * @b: chracter to be printed
 * @n: usigned int
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return (s);
}
