#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int a, b;

	a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (a < b)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < b - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		a++;
	}
	return (0);
}

