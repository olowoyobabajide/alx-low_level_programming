#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds number
 * @argc: argument count
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int sum;
	int a;

	sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			sum += atoi(argv[a]);

			if (atoi(argv[a]) > '9' || atoi(argv[a]) < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
