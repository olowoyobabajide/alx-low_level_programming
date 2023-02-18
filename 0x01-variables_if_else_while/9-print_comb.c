#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 9)
	{
		printf("%d, ", x);
		x++;
	}
	printf("9");
	printf("\n");
	return (0);
}
