#include "main.h"
/**
 * _sqrt_recursion - return square root recursively
 * @n: number to be recursed
 * Return: function call to recurse
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	i = _sqrt_recursion(n / 4) * 2;
	if (x * x <= n && (x + 1) > n)
		return (i);
	else if ((x + 1) * (x + 1) == n)
		return (x + 1);
	else
		return (_sqrt_recursion(n));
}
