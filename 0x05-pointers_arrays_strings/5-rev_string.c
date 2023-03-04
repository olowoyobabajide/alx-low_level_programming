#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string is reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a = a - 1; a >= 0; a--)
	{
		return (s[a]);
	}
	_putchar('\n');
}
