#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int i;

	for (i = 0; res != 0; i++)
		res &= res - 1;
	return (i);
}
