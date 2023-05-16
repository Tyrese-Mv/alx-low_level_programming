#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bits
 * @n: num 1
 * @m: num 2
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		result &= result - 1;
		count++;
	}
	return (count);
}
