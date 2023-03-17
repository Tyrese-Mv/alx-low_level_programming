#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a';

	char ch2 = 'A';

	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}
	if (ch1 == 'z')
	{
		while (ch2 <= 'Z')
		{
			putchar(ch2);
			ch2++;
		}
	}
	putchar('\n');
	return (0);
}
