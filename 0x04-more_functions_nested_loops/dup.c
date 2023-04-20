#include <stdio.h>
#include <stdlib.h>

/**
 * dup - duplicates string
 * @str: string
 * Return: Always 0
 */
char *dup(char *str)
{
	int a;

	char *s;

	int b = 0; 
	b++;
	s = malloc(sizeof(char) * b);
	for (a = 0; a < b; a++)
		s[a] = *str;
	if (a == 0 || s == NULL)
		return NULL;

	return (s);
	free(s);
	return (0);
}

int main()
{ 
	char *s;
	s = dup("dgdhdh");
	printf("%s", s);
	return (0);
}
