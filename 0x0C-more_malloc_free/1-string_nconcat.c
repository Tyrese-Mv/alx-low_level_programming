#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: nuberof bytes
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while ((s2[j] != '\0') && (j < n))
		j++;
	if (n >= j)
	{
		ch = malloc(sizeof(char) * (i + n));
	}
	else
	{
		ch = malloc(sizeof(char) * (i + j));
	}
	if (ch == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ch[k] = s1[k];
	for (l = 0; l < j; l++)
	{
		ch[k + l] = s2[l];
	}
	ch[k + l] = '\0';
	return (ch);
}
