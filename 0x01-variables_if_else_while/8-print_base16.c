#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = '0';
	char ch2 = 'a';

	while (ch1 <= '9')
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 <= 'f')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
