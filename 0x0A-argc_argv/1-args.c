#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d", i);
		printf("\n");
	}
return (0);
}
