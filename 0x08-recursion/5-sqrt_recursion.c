#include "main.h"
/**
 * _sqrt_recursion - return square root recursively
 * @n: number to be recursed
 * Return: function call to recurse
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	i = _sqrt_recursion(n / 4) * 2;
	if (i * i <= n && (i + 1) * (i + 1) > n)
		return (i);
	else if ((i + 1) * (i + 1) == n)
		return (i + 1);
	else
		return (_sqrt_recursion(n));
}
