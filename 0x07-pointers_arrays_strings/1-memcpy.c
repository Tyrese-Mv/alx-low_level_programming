#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where we want to copy to
 * @src: where we want to copy from
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
