#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
			if (x == 'e')
			{
				continue;
			}
			if (x == 'q')
			{
				continue;
			}
	}
	putchar('\n');
	return (0);
}
