#include "main.h"
/**
 * _isalpha - checks capital letters
 * @c: checks alphabets
 * Return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
