#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double x = 1;

	while (x < 100)
	{
		if (x != 10)
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
