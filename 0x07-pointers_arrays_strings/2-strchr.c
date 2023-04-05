#include "main.h"
#include <stddef.h>
/**
 * _strchr - Checks occurence of characters
 * @s: string to check
 * @c: starts printing from this character
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] >= '\0')
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		j++;
	}
	return (NULL);
}
