#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string to be converted
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[1] != '0')
			return (0);
		sum = (sum << 1) + (*b - '\0');
	}
	return (sum);
}
