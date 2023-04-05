#include "main.h"
/**
 * _strspn - gets length of a prefix sustring
 * @s: string that will be scanned
 * @accept: string to match
 * Return: number of matching chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j;

	for (i = 0; accept[i] >= '\0'; i++)
	{
		for (j = 0; s[j] >= '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				n++;
			}
		}
	}
	return (n);
}
