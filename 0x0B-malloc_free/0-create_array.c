#include <stdlib.h>
#include "main.h"
/**
 * create_array - initializes char array
 * @size: memory allocated
 * @c: char to be initialised
 * Return: NULL if size is 0 or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	int i, j;

	if (size == 0)
	{
		return (NULL);
	}
	j = sizeof(char) * size;
	ch = malloc(sizeof(char) * size);
	for (i = 0; i < j; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
