#include "main.h"
#include <stddef.h>
/**
 * _strlen - length of string
 * @b: string to measure
 * Return: unsigned integer
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	return (i);
}
