#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '8')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	if (num == '8')
	{
		num++;
		putchar(num);
	}
	putchar('\n');
	return (0);
}
