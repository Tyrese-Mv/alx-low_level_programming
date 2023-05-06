#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: string to convert
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = _strlen(b), total = 0, octet = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = len ? (len - 1) : 0; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			total += octet;
		octet *= 2;
	}
	return (total);
}