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
	int i, j, k, l;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j] && i < n)
		j++;
	ch = malloc(sizeof(char) * (i + j + 1));
	if (ch == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ch[i] = s1[i];
	for (l = 0; l < j; l++)
	{
		ch[i] = s2[l];
		i++;
	}
	ch[i + j] = '\0';
	return (ch);
}
