#include "main.h"

/**
 * print_line - prints lines
 * @n: no of times _ is to be printed
 * Return: Always 0
 */
void print_line(int n)
{
	n = 0;
	while (n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
