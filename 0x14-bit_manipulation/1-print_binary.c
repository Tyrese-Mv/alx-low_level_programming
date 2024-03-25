#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: long int
*/
void print_binary(unsigned long int n)
{
    int leading_one_found = 0;
	unsigned long int mask;

    for (mask = 1UL << (sizeof(unsigned long int) * 8 - 1); mask; mask >>= 1)
    {
        if (n & mask)
        {
            _putchar('1');
            leading_one_found = 1;
        }
        else if (leading_one_found)
        {
            _putchar('0');
        }
    }
    if (!leading_one_found)
        _putchar('0');
}
