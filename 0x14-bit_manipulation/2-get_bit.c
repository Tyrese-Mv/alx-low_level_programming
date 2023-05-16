#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns value of a it at a given index
 * @n: number
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int Shift, result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	Shift = 1UL << index;
	result = n & Shift;
	return ((result != 0) ? 1 : 0);
}
