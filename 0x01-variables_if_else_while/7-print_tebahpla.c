#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'z';
	while (x <= 'z')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
