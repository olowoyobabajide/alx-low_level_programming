#include <stdio.h>
#include "main.h"

/**
 * main - gives the argument count
 * @argc: argument count
 * @argv: argument
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
