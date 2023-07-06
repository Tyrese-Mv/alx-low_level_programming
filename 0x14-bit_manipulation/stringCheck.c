#include "main.h"
/**
 * _strlen - checks length of the string
 * @b: string to be checked
 * Return: string length
 */
unsigned int _strlen(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	return i;
}
