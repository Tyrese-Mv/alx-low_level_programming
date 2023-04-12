#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: Null or concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ch = malloc(sizeof(char) * i + j + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	for  (k = 0; k < i; k++)
	{
		ch[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		ch[k] = s2[l];
		k++;
	}
	ch[k] = '\0';
	return (ch);
}
