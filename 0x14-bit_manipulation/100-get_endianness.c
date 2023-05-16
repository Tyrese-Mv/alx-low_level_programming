#include "main.h"
#include <stdio.h>
/**
 * get_endianness - endian
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char* str = (unsigned char*) &num;

	return ((int)(*str));
}
