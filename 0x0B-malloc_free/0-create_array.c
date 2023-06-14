#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	arr = (char *)malloc(size * sizeof(char));	
	if (size == 0)
	{
		return NULL;
	}
	if (arr == NULL)
	{
		return NULL;
	}
	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}
	return arr;
}
