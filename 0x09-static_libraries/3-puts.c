#include "main.h"

/**
 * _puts - entry point
 * @s: char pointer
 * Return: Always 0
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
