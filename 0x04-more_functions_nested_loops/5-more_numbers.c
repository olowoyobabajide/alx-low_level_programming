#include "main.h"

/**
 * more_numbers - prints 0-14
 * Return: Always 0
 */
void more_numbers(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 0;
		int a = 1012131415;
		while (b <= 10)
		{
			_putchar(b + '0');
			_putchar(a + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
