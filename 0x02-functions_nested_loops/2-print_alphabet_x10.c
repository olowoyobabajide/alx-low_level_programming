#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		char y = 'a';

		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
