#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer value
 * @index: index
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int scope;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	scope = 1UL << index;
	*n |= scope;
	return (1);
}
