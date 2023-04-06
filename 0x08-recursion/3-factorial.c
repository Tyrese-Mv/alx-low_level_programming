#include "main.h"
/**
 * factorial - multipliyng number by itself minus 1
 * @n: number to calculate
 * Return: num
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
