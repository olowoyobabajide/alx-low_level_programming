#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: Always 0 (Success)
 */

int main(void)
{
	char x;
	x = 'a';

	while(x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
