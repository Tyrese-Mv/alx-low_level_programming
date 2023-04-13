#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocate memory set to zero
 * @nmemb: number of elements
 * @size: size of elements
 * Return: array pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ch;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = sizeof(size) * nmemb;
	ch = malloc(j);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		ch[i] = 0;
	}
	return (ch);
}
