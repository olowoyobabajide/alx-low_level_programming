#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char x;

	a = 0;
	x = 'a';
	while (a < 10)
	{
		printf("%d");
		a++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar("\n");
	return (0);
}
