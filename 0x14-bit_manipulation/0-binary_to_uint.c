#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b - string to be converted
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, size = _strlen(b), sum = 0, baseNum = 1;

	if (b == NULL)
		return(0);
	for (i = (size - 1); i > 0; i--)
	{
		if (b[i] != '1' && b[1] != '0')
			return (0);
		if (b[i] == '1')
			sum += baseNum;
		baseNum *= 2;
	}
	return (sum);
}
