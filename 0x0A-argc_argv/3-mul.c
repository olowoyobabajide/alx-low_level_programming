#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies a number
 * @argc: argument count
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
