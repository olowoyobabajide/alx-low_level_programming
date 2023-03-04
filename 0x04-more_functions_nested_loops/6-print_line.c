#include "main.h"

/**
 * print_line - prints lines
 * @n: no of times _ is to be printed
 * Return: Always 0
 */
void print_line(int n)
{
	while (n > 1)
	{
		_putchar('_');
	}
		if (n == 0)
		{
			_putchar('\n');
		}
	n++;
	_putchar('\n');

}
