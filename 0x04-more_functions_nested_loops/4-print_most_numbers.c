#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 except 2 & 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c + '0');
		c++;

	if (c == 2 && c == 4)
	{
		continue;
	}
	}
}
