#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocating memory
 * @b: number of bytes
 * Return: pointer to memory allocated\
 */
void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);
	if (ch == NULL)
	{
		exit(98);
	}
	return (ch);
}
