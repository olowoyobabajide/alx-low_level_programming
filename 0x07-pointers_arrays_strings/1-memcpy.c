#include "main.h"

/**
 * _memcpy -  entry point
 * @dest: first character
 * @src: second character
 * @n: an unsigned integer
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
