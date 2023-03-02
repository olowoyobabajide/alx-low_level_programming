#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[n] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[n] = '\0';
	}
	return (dest);
}
