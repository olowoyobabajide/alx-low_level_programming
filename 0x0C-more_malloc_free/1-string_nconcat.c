#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: check wheteher n is equal to s2
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i = 0, j = 0;
	char *str;

	if (s1[a])
	{
		while (s1[a] != '\0')
		{
			a++;
		}
	}
	if (s2[b])
	{
		while (s2[b] != '\0')
		{
			b++;
		}
	}
	if (n >= b)
	{
		n = b;
	}
	str = malloc((a + b + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
		str[i] = s1[i];

	for (j = 0; j < b; j++)
	{
		str[i++] = s2[j];
	}
	str[i] = '\0';

	return (str);

}
