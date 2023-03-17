#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '`';

	ch++;
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	return (0);
}
