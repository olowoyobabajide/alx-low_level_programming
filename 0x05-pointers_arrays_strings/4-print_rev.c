#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: checks the strings
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a = a - 1; a >= 0; a--)
	{
		_putchar (s[a]);
	}

	_putchar ('\n');
}
