#include "main.h"

/**
 * _strncpy - entry point
 * @dest: char poinetr1
 * @src: char pointer2
 * @n: integer
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return dest;
}
