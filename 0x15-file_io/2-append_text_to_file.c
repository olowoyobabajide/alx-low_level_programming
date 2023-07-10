#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: A pointer.
 * @text_content: The string to be added to the file
 * Return: If the function fails or filename is NULL - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, arr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[arr])
			arr++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, arr);

	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}
