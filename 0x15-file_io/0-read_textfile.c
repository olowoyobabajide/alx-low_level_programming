#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads txt file and prints it to the POSIX standard output.
 * @filename: txt file
 * @letters: no of letters
 * Return: 0 if function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *list;
	ssize_t fild;
	ssize_t a;
	ssize_t b;

	fild = open(filename, O_RDONLY);
	list = malloc(sizeof(char) * letters);

	if (fild == -1)
		return (0);
	b = read(fild, list, letters);
	a = write(STDOUT_FILENO, list, b);

	free(list);
	close(fild);
	return (a);
}
