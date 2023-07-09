#include "main.h"

/**
 * print_binary - binary equivalent of a decimal number
 * @n: no to print in base 2
 */
void print_binary(unsigned long int n)
{
	int a, l;
	unsigned long int bin;

	a = 63;
	l = 0;

	while (a >= 0)
	{
		bin = n >> a;

		if (bin & 1)
		{
			_putchar('1');
			l++;
		}
		else if (l)
			_putchar('0');

		a--;
	}
	if (!l)
		_putchar('0');
}
