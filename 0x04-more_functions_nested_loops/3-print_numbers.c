#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * Return: Always 0
 */
void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
