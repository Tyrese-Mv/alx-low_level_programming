#include "main.h"
/**
 * _islower - checks for lower characters
 * @c: the char gets checked
 * Return: 1 if true or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
