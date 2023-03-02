#include "main.h"

/**
 * print_sign - prints difference signs for different integers
 * @n: checks the integer
 * Return: 1 if > than 0, 0 if == to 0 and -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
