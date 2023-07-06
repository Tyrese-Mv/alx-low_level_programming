#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer value
 * @index: given index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int scope;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	scope = 1UL << index;
	*n &= ~scope;
	return (1);
}
