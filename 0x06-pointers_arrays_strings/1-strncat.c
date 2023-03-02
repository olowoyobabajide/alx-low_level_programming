#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: an integer
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	n = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[n] != '\0')
	{
		dest[x] = src[n];
		x++;
		n++;
	}
	dest[x] = '\0';
	return (dest);
}
