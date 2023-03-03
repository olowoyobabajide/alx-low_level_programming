#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: first pointer
 * @src: second pointer
 * @n: length of src.
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

