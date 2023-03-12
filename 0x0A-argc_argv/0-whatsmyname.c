#include <stdio.h>


/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
