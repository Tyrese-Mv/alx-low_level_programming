#include <stdlib.h>
#include "main.h"
/**
 * _strlen - get srting length
 * @strnew: string to count
 * Return: string length
 */
int _strlen(char *strnew)
{
	int i = 0;
	if (strnew == NULL)
	{
		return;
	}
	while (strnew[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - duplicate a string function
 * @str: new string
 * Return: string
 */
char *_strdup(char *str)
{
	int i, num = sizeof(char) * _strlen(str);
	char *newchar;

	if (str == NULL)
	{
		return (NULL);
	}
	newchar = malloc(num);
	for (i = 0; i < num; i++)
	{
		newchar[i] = str[i];
	}
	return (newchar);
}
