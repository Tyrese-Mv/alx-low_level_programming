#include "main.h"
/**
 * str_len - checks length of string
 * @s: strings to measure
 * Return: return length
 */
int str_len(char *s)
{
	if (s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}
/**
 * check_pal - check for palindrome
 * @s: string
 * @beg: beginning of string
 * @end: end of string
 * Return: check pal recursively
 */
int check_pal(char *s, int beg, int end)
{
	if (beg >= end)
		return (1);
	if (s[beg] != s[end])
		return (0);
	return (check_pal(s, beg + 1, end - 1));
}
/**
 * is_palindrome - check palindrome
 * @s: string
 * Return: check palindrome recursively
 */
int is_palindrome(char *s)
{
	int i;

	i = str_len(s);
	if (i <= 1)
		return (1);
	return (check_pal(s, 0, i - 1));
}
