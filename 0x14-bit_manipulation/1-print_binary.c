#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: long int
*/
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8 - 1;
	unsigned long int mask = 1UL << bits;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
