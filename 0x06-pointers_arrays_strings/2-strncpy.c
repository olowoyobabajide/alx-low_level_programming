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
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
