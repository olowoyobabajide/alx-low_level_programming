#include "main.h"

/**
 * _puts - prints characters with new line
 * @str: string is checked
 * Return: Always 0
 */
void _puts(char *str)
{
	char *p;
	int a;

	p = str;
	for (a = 0; p[a]; a++)
	{
		_putchar (p[a]);
	}
}
