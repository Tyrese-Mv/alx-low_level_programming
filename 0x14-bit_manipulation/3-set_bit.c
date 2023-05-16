#include "main.h"
#include <stdio.h>
/**
 * set_bit - set bit
 * @n: number
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Shift;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	Shift = 1UL << index;
	*n |= Shift;
	return (1);
}
